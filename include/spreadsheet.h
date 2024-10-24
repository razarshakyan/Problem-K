#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <vector>
#include <string>
#include <stdexcept>
#include "cell.h"

class Spreadsheet {
  public:
    Spreadsheet(int rows, int cols);
    ~Spreadsheet();

    void set_value(int row, int col, const std::string& value); 
    std::string evaluate_cell(int row, int col);
    void print();

  private:
    struct CellReference {
      char letter;
      int digit;
    };

    std::vector<std::vector<Cell>> cells_;
};

#endif
