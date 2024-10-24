#include "spreadsheet.h"
#include "parser.h"
#include <iostream>
#include <iomanip>

int main() {
  std::string input;
  std::getline(std::cin, input);

  Parser parser(input);
  parser.parse();

  int rows = parser.get_height();
  int cols = parser.get_width();

  Spreadsheet spreadsheet(rows, cols);

  for (auto& row : parser.get_rows()) {
    for (size_t i = 1; i < row.cells.size(); ++i) {
      spreadsheet.set_value(i - 1, i - 1, row.cells[i]);
    }
  }

  // EVAL EXPR
  for (int row = 0; row < rows; ++row) {
    for (int col = 0; col < cols; ++col) {
      if (spreadsheet.evaluate_cell(row, col) == 0) { // EXPR
        spreadsheet.evaluate_cell(row, col);
      }
    }
  }

  // PRINT RESULTS
  std::cout << std::fixed << std::setprecision(0);
  for (auto& row : parser.get_rows()) {
    for (size_t i = 0; i < row.cells.size(); ++i) {
      int value = spreadsheet.evaluate_cell(i, i);
      std::cout << std::setw(10) << (value == 0 ? "#" : std::to_string(value)) << " ";
    }
    std::cout << "\n";
  }

  return 0;
}

