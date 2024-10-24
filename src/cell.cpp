#include "cell.h"
#include <algorithm>
#include <iostream>
#include "parser.h"

void Cell::set_value(const std::string& value) {
  if (value.empty()) {
    throw std::invalid_argument("Cell content cannot be empty");
  }

  if (value[0] == '=' && value.size() > 1) {
    type_ = Type::Expression;
    expression_ = value.substr(1);
  } else if (std::all_of(value.begin(), value.end(), ::isdigit)) {
    type_ = Type::Integer;
    integer_ = std::stoi(value);
  } else if (value.at(0) == '\'') {
    type_ = Type::Text;
    text_ = value.substr(1);
  } else {
    throw std::invalid_argument("Invalid cell content");
  }
}

std::string Cell::evaluate(Spreadsheet& spreadsheet) {
  switch (type_) {
    case Type::Empty:
      return "#Error: Empty cell"; 
    case Type::Integer:
      return std::to_string(integer_); 
    case Type::Text:
      return text_; 
    case Type::Expression:
      return expression_;
      //return std::to_string(Parser::evaluate_expression(spreadsheet, expression_)); // Adjust to return a string
  }
  return "#Error: Unknown Cell Type";
}
