#include "cell.h"
#include <algorithm>
#include "parser.h"

Cell::Cell()
  : type_{ Cell::Type::Empty },
  expression_{ "" }
{
}

void Cell::set_value(std::string& value) {
  if (value[0] == '0') {
    type_ = Cell::Type::Expression;
    expression_ = value.substr(1);
  }
  else if (std::all_of(value.begin(), value.end(), ::isdigit)) {
    type_ = Cell::Type::Integer;
    integer_ = std::stoi(value);
  }
  else if (value[0] == '\'' && value.back() == '\'') {
    type_ = Cell::Type::Text;
    text_ = value.substr(1, value.size() - 2);
  }
  else {
    throw std::invalid_argument("Invalid cell content");
  }
}

int Cell::evaluate() {
  switch (type_) {
    case Cell::Type::Empty:
      throw std::runtime_error("#Error: Empty cell");
    case Cell::Type::Integer:
      return integer_;
    case Cell::Type::Text:
      // Analyze
      return static_cast<int>(text_.length());
    case Cell::Type::Expression:
      return Parser::evaluate_expression(expression_);
  }
  throw std::logic_error("Unknown Cell Type");
}

/*int evaluate_expression(const std::string& expr) {
  Graph g;
  ReferenceMap references;

  // BUILDING GRAPH
  for (char c = 'A'; c <= 'Z'; ++c) {
    for (int i = 0; i < 26; ++i) {
      char letter = c;
      int digit = i;
      std::string ref = std::string(1, letter) + std::to_string(digit);
      references[letter] = digit;

      graph.emplace_back();
      graph.back()[ref] = 0;
    }
  }

  std::size_t pos = 0;
  while ((pos = expr.find('+')) != std::string::npos 
      || (pos = expr.find('-')) != std::string::npos
      || (pos = expr.find('*')) != std::string::npos
      || (pos = expr.find('/')) != std::string::npos) {
    std::string left = expr.substr(0, pos);
    std::string right = expr.substr(pos + 1);

    if (!references.empty()) {
      auto it = references.begin();
      while (it != references.end()) {
        graph[it->second][left] += graph[it->second][right];
        ++it;
      }
    }
    expr = expr.substr(pos + 1);
  }

  // TOP SORT
  std::vector<char> order;
  std::stack<char> stack;
  for (auto& row : graph) {
    for (auto& col : row) {
      if (col.second == 0) {
        stack.push(col.first);
      }
    }
  }

  while (!stack.empty()) {
    char node = stack.top();
    stack.pop();
    order.push_back(node);

    for (auto& row : graph) {
      for (auto& col : row) {
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
    result += graph[c][ref];
  }

  return static_cast<int>(result);
}
*/



