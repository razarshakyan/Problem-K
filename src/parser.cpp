#include "parser.h"
#include <sstream>
#include <cctype>

using ReferenceMap = std::unordered_map<char, int>;
using Graph = std::vector<ReferenceMap>;

Parser::Parser(std::string& input)
  : height_{ 0 },
  width_{ 0 } 
{
  std::istringstream iss(input);
  std::string line;

  std::getline(iss, line);
  std::istringstream dim(iss.str());
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

Parser::~Parser() 
{
}

void Parser::parse() 
{ 
  //TODO 
}

int Parser::evaluate_expression(std::string& expr) {
  Graph graph;
  ReferenceMap references;

  // BUILDING GRAPH
  for (char c = 'A'; c <= 'Z'; ++c) {
    for (int i = 0; i < 26; ++i) {
      char letter = c;
      int digit = i;
      std::string ref = std::string(1, letter) + std::to_string(digit);
      references[letter] = digit;

      graph.emplace_back();
      graph.back().insert({ ref, 0 });
    }
  }

  std::size_t pos = 0;
  while ((pos = expr.find('+'))!= std::string::npos
      || (pos = expr.find('-'))!= std::string::npos
      || (pos = expr.find('*'))!= std::string::npos
      || (pos = expr.find('/'))!= std::string::npos) {
    std::string left = expr.substr(0, pos);
    std::string right = expr.substr(pos + 1);

    for (const auto& pair : references) {
      graph[pair.second][left] += graph[pair.second][right];
    }
    expr = expr.substr(pos + 1);
  }

  // TOP SORT
  std::vector<char> order;
  std::stack<char> stack;
  for (const auto& row : graph) {
    for (const auto& col : row) {
      if (col.second == 0) {
        stack.push(col.first);
      }
    }
  }

  while (!stack.empty()) {
    char node = stack.top();
    stack.pop();
    order.push_back(node);

    for (const auto& row : graph) {
      for (const auto& col : row) {
        if (col.first == node) {
          --col.second;
          if (col.second == 0) {
            stack.push(col.first);
          }
        }
      }
    }
  }

  double result = 0.0;
  for (char c : order) {
    std::string ref = std::string(1, c) + "0";
    result += graph.at(c)[ref];
  }

  return static_cast<int>(result);
}

