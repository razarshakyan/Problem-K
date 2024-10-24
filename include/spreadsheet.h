#ifndef SPREADHSEET_H
#define SPREADHSEET_H

#include <vector>
#include <string>
#include <stdexcept>
#include "cell.h"

class Spreadsheet {
public:
  Spreadsheet(int rows, int cols);
  ~Spreadsheet();

  void set_value(int row, int col, std::string& value);
  int evaluate_cell(int row, int col);

  //static int evaluate_expression(const std::string& expr);

private:
  struct CellReference {
    char letter;
    int digit;
  };

  std::vector<std::vector<Cell>> cells_;
};

#endif
