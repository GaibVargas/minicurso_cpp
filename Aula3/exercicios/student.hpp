#ifndef SCHOOL_STUDENT_HPP
#define SCHOOL_STUDENT_HPP
#include <string>
#include <vector>

namespace school {

class Student {
public:
    Student(std::string s, int year, std::vector<double> notes):
      name_{s}, year_{year}, notes_{notes}
    {}

    std::string name() const
    {
      return name_;
    }

    int year() const
    {
      return year_;
    }

    std::vector<double> notes() const
    {
      return notes_;
    }

    double average();
    int years_enrolled(int);

private:
    std::string name_;
    int year_;
    std::vector<double> notes_;
};

}

#endif