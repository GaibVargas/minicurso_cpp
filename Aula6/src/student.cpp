#include "student.hpp"

namespace school {

std::vector<double> Student::averages() const
{
  auto averages = std::vector<double>{};

  for (auto& subject: subjects_) {
    averages.push_back(subject->average());
  }

  return averages;
}

int Student::years_enrolled(int current_year) const
{
  return current_year - year_;
}

}
