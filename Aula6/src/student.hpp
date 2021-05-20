#ifndef SCHOOL_STUDENT_HPP
#define SCHOOL_STUDENT_HPP

#include <string>
#include <vector>
#include <memory>

#include "course.hpp"

namespace school {

class Student {
public:
    Student(std::string const& name, int year, std::vector<std::unique_ptr<Course>> subjects):
      name_{name}, year_{year}, subjects_{std::move(subjects)}
    {}

    std::string const& name() const
    {
      return name_;
    }

    std::vector<double> averages() const;
    int years_enrolled(int) const;

private:
    std::string name_;
    int year_;
    std::vector<std::unique_ptr<Course>> subjects_;
};

}

#endif