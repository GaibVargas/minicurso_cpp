#ifndef SCHOOL_STUDENT_HPP
#define SCHOOL_STUDENT_HPP
#include <string>
#include <vector>

namespace school {

class Student {
public:
    Student(std::string const& name, int year, std::vector<double> notes):
      name_{name}, year_{year}, notes_{notes}
    {}

    std::string name() const
    {
      return name_;
    }

    int year() const
    {
      return year_;
    }

    std::vector<double> notes() const&
    {
      return notes_;
    }

    double average() const;
    int years_enrolled(int) const;

private:
    std::string name_;
    int year_;
    std::vector<double> notes_;
};

}

#endif