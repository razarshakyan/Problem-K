#include "spreadsheet.h"
#include <iostream>
#include <iomanip>


Spreadsheet::Spreadsheet(int rows, int cols)
  : cells_(rows, std::vector<Cell>(cols))
{
}

Spreadsheet::~Spreadsheet() {}

void Spreadsheet::set_value(int row, int col, const std::string& value) {
  CellReference ref;
  ref.letter = static_cast<char>(row + 'A');
  ref.digit = col;

  if (ref.letter < 'A' || ref.letter > 'Z' || ref.digit < 0 || ref.digit >= 26) {
    throw std::out_of_range("Invalid cell reference");
  }

  cells_[row][col].set_value(value);
}

std::string Spreadsheet::evaluate_cell(int row, int col) {
  CellReference ref;
  ref.letter = static_cast<char>(row + 'A');
  ref.digit = col;

  if (ref.letter < 'A' || ref.letter > 'Z' || ref.digit < 0 || ref.digit >= 26) {
    throw std::out_of_range("Invalid cell reference");
  }

  // std::cout << "yaldr" << std::endl;
  return cells_[row][col].evaluate(*this); 
}

void Spreadsheet::print() {
  for (auto& row : cells_) {
    for (auto& cell : row) {
      try {
        std::string value = cell.evaluate(*this);
        std::cout << std::setw(10) << value << " "; 
      } catch (const std::exception& e) {
        std::cout << std::setw(10) << "#Error" << " "; 
      }
    }
    std::cout << "\n"; 
  }
}


