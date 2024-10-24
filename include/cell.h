#ifndef CELL_H
#define CELL_H

#include <string>
#include <stdexcept>

// FD
class Spreadsheet; 

class Cell {
  public:
    enum class Type { Empty, Integer, Text, Expression };

    Cell() : type_{ Type::Empty }, integer_{ 0 }, expression_{ "" } {}
    ~Cell() {}

    void set_value(const std::string& value);
    std::string evaluate(Spreadsheet& spreadsheet);

  private:
    Type type_;
    int integer_;           
    std::string text_;      
    std::string expression_;
};


#endif
