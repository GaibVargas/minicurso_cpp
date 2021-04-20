#include "functions.hpp"
#include "student.hpp"

namespace school {
std::vector<school::Student> approved(std::vector<school::Student> const& students)
{
  auto approveds = std::vector<school::Student>{};

  for (auto student: students) {
    if (student.average() >= 6.0) {
      approveds.push_back(student);
    }
  }

  return approveds;
}

std::vector<school::Student> dismissed_by_time(std::vector<school::Student> const& students, int year)
{
  auto dismisseds = std::vector<school::Student>{};

  for (auto student: students) {
    if (student.years_enrolled(year) > 7) {
      dismisseds.push_back(student);
    }
  }

  return dismisseds;
}

}