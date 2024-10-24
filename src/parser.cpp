#include <unordered_map>
#include <queue>
#include "parser.h"
#include <sstream>
#include <cctype>
#include <iostream>

Parser::Parser(std::string& input)
  : height_{0}, width_{0} 
{
  std::istringstream iss(input);
  std::string line;

  std::getline(iss, line);
  std::istringstream dim(line);
  dim >> width_ >> height_;

  while (std::getline(iss, line)) {
    RowData row;
    std::istringstream row_stream(line);
    std::string cell;
    while (row_stream >> cell) {
      row.cells.push_back(cell);
    }
    rows_.push_back(row);
  }
}

Parser::~Parser() {}

void Parser::parse(Spreadsheet& spreadsheet) {
  for (int i = 0; i < height_; ++i) {
    for (size_t j = 0; j < rows_[i].cells.size(); ++j) {
      spreadsheet.set_value(i, j, rows_[i].cells[j]);
    }
  }
}

int Parser::evaluate_expression(Spreadsheet& spreadsheet, std::string& expr) {
  std::unordered_map<std::string, std::vector<std::string>> adj_list; // DG
  std::unordered_map<std::string, int> in_degree; // INDEGREE 

  std::istringstream expr_stream(expr);
  std::string token;

  while (expr_stream >> token) {
    if (token.size() > 1 && isalpha(token[0]) && isdigit(token[1])) {
      adj_list[token]; 
      in_degree[token] = 0; 
    }
  }

  // INIT
  expr_stream.clear();
  expr_stream.str(expr); 

  while (expr_stream >> token) {
    if (isalpha(token[0]) && isdigit(token[1])) {
      for (const auto& dep : adj_list) {
        if (token != dep.first && expr.find(dep.first) != std::string::npos) {
          adj_list[token].push_back(dep.first);
          in_degree[dep.first]++;
        }
      }
    }
  }

  // INIT QUEUE
  std::queue<std::string> q;
  for (const auto& entry : in_degree) {
    if (entry.second == 0) {
      q.push(entry.first);
    }
  }

  std::unordered_map<std::string, std::string> evaluated_values;

  // KAHNS ALGO
  while (!q.empty()) {
    std::string current = q.front();
    q.pop();

    try {
      std::string value = spreadsheet.evaluate_cell(current[0] - 'A', current[1] - '1'); 
      evaluated_values[current] = value; 
    } catch (const std::runtime_error& e) {
      std::cerr << "Error evaluating " << current << ": " << e.what() << std::endl;
      return 0; 
    }

    
    for (const auto& neighbor : adj_list[current]) {
      in_degree[neighbor]--;
      if (in_degree[neighbor] == 0) {
        q.push(neighbor);
      }
    }
  }

  for (const auto& entry : in_degree) {
    if (entry.second > 0) {
      throw std::runtime_error("Cyclic dependency detected");
    }
  }

  
  std::string result_expr = expr;
  for (const auto& pair : evaluated_values) {
    std::string cell_ref = pair.first;
    std::string cell_value = pair.second;
    
    size_t pos;
    while ((pos = result_expr.find(cell_ref)) != std::string::npos) {
      result_expr.replace(pos, cell_ref.length(), cell_value);
    }
  }

  double result = 0.0;
  std::istringstream final_stream(result_expr);
  double current_number;
  char op = '+'; // Start with addition

  while (final_stream >> current_number) {
    if (op == '+') result += current_number;
    else if (op == '-') result -= current_number;
    else if (op == '*') result *= current_number;
    else if (op == '/') result /= current_number;

    final_stream >> op; // Read the next operator
  }

  return static_cast<int>(result);
}


