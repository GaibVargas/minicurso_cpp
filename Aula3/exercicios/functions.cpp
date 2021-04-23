#include "functions.hpp"
#include "student.hpp"

namespace school {
std::vector<school::Student> approved(std::vector<school::Student> const& students)
{
  auto students_approved = std::vector<school::Student>{};

  for (auto const& student: students) {
    if (student.average() >= 6.0) {
      students_approved.push_back(student);
    }
  }

  return students_approved;
}

std::vector<school::Student> dismissed_by_time(std::vector<school::Student> const& students, int year)
{
  auto students_dismissed = std::vector<school::Student>{};

  for (auto const& student: students) {
    if (student.years_enrolled(year) > 7) {
      students_dismissed.push_back(student);
    }
  }

  return students_dismissed;
}

}