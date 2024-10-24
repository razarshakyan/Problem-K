#ifndef CELL_H
#define CELL_H

#include <string>
#include <stdexcept>

class Cell {
public:
  enum class Type { Empty, Integer, Text, Expression };

  Cell();
  ~Cell();

  void set_value(std::string& value);
  int evaluate();

private:
  Type type_;
  union {
    int integer_;
    double expression_result_;
    std::string text_;
  };
  std::string expression_;
};

#endif
