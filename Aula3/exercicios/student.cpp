#include "student.hpp"

namespace school {

double Student::average()
{
  auto total = 0.0;

  for (auto n: notes_) {
    total += n;
  }

  return total/notes_.size();
}

int Student::years_enrolled(int currentYear)
{
  return currentYear - year_;
}

}
