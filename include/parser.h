#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <string>
#include <stdexcept>
#include <unordered_map>
#include <stack>

struct RowData {
  std::vector<std::string> cells;
};

class Parser {
public:
  Parser(std::string& input);
  ~Parser();

  void parse();
  int get_height() const { return height_; }
  int get_width() const { return width_; }
  std::vector<RowData>& get_rows() { return rows_; }

  static int evaluate_expression(std::string& expr);

private:
  std::vector<RowData> rows_;
  int height_;
  int width_;
};

#endif
