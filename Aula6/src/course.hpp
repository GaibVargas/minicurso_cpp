#ifndef SCHOOL_COURSE_HPP
#define SCHOOL_COURSE_HPP

#include <vector>

class Course {
public:
  virtual double average() const = 0;
};

class DataStructures: public Course {
public:
  DataStructures(std::vector<double> const& notes):
    notes_{notes}
  {}

  double average() const;

private:
  std::vector<double> notes_;
};

class Calculus: public Course {
public:
  Calculus(std::vector<double> const& notes):
    notes_{notes}
  {}

  double average() const;

private:
  std::vector<double> notes_;
};

#endif