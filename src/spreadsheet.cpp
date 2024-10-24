#include <spreadsheet.h>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>

//using ReferenceMap = std::unordered_map<char, int>;
//using Graph = std::vector<ReferenceMap>;

Spreadsheet::Spreadsheet(int rows, int cols)
  : cells_{ rows, std::vector<Cell>(cols) }
{
}

Spreadsheet::~Spreadsheet()
{
}

void Spreadsheet::set_value(int row, int col, std::string& value) {
  CellReference ref;
  ref.letter = static_cast<char>(row + 'A');
  ref.digit = col;

  if (ref.letter < 'A' || ref.letter > 'Z'
      || ref.digit < 0 || ref.digit >= 26) {
    throw std::out_of_range("Invalid cell reference");
  }

  cells_[row][col].set_value(value);
}

int Spreadsheet::evaluate_cell(int row, int col) {
  CellReference ref;
  ref.letter = static_cast<char>(row + 'A');
  ref.digit = col;

  if (ref.letter < 'A' || ref.letter > 'Z'
      || ref.digit < 0 || ref.digit >= 26) {
    throw std::out_of_range("Invalid cell reference");
  }

  return cells_[row][col].evaluate();

}

