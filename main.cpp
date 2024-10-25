#include "spreadsheet.h"
#include "parser.h"
#include <iostream>
#include <iomanip>

int main() {
  std::string input = 
    "4 3\n"
    "12 =C2 3 'Sample\n"
    "=A1+B1*C1/5 =A2*B1 =B3-C3 'Spread\n"
    "'Test =4-3 5 'Sheet\n";

  Parser parser(input);

  int rows = parser.get_height();
  int cols = parser.get_width();

  Spreadsheet spreadsheet(rows, cols);
  parser.parse(spreadsheet);

  std::cout << "rows: " << rows << " cols: " << cols << std::endl;


  spreadsheet.print();
  // std::cout << rows << cols << std::endl;
  // for (int row = 0; row < rows; ++row) {
  //     std::cout << row << std::endl;
  //     for (int col = 0; col < cols; ++col) {
  //         try {
  //             std::string value = spreadsheet.evaluate_cell(row, col);
  //             std::cout << std::setw(10) << value << " ";
  //         } catch (const std::exception& e) {
  //             std::cout << std::setw(10) << "#Error"; // Error placeholder
  //         }
  //     }
  //     std::cout << "\n";
  // }

  return 0;
}
