#include <istream>
#include <string>
#include <sstream>

#include "functions.hpp"
#include "student.hpp"

namespace {
  auto read_int(std::istream& input)
  {
    auto buf = std::string{};

    std::getline(input, buf);

    auto sstr = std::stringstream{buf};

    auto i = 0;
    sstr >> i;

    return i;
  }

  auto read_double(std::istream& input)
  {
    auto buf = std::string{};

    std::getline(input, buf);

    auto sstr = std::stringstream{buf};

    auto i = 0.0;
    sstr >> i;

    return i;
  }

  auto read_string(std::istream& input)
  {
    auto str = std::string{};

    std::getline(input, str);

    return str;
  }

  school::Student read_student(std::istream& input)
  {
    auto name = read_string(input);
    auto year = read_int(input);
    auto grades = std::vector<double>{
      read_double(input),
      read_double(input),
      read_double(input),
    };

    return {
      name, year, grades
    };
  }
}


namespace school {
std::vector<Student> approved(std::vector<Student> const& students)
{
  auto students_approved = std::vector<Student>{};

  for (auto const& student: students) {
    if (student.average() >= 6.0) {
      students_approved.push_back(student);
    }
  }

  return students_approved;
}

std::vector<Student> dismissed_by_time(std::vector<Student> const& students, int year)
{
  auto students_dismissed = std::vector<Student>{};

  for (auto const& student: students) {
    if (student.years_enrolled(year) > 7) {
      students_dismissed.push_back(student);
    }
  }

  return students_dismissed;
}

std::vector<Student> read_students(std::istream& input)
{
  auto n_students = read_int(input);

  auto students = std::vector<Student>{};

  for (auto i = 0u; i < n_students; i++) {
    students.push_back(read_student(input));
  }

  return students;
}

}