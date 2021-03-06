#ifndef BASIC_LINE_HPP__
#define BASIC_LINE_HPP__

#include <string>
#include <iostream>

class basic_line {
  std::string line_;
  size_t lineno_;

public:
  basic_line(size_t lineno, const std::string &line);

  const std::string &line() const;
  size_t lineno() const;

  virtual void output_to(std::ostream &o) const;

  virtual ~basic_line();
};

#endif // BASIC_LINE_HPP__
