#include "course.hpp"

double DataStructures::average() const
{
  auto works = 0.0;
  for (int i = 0u; i < 3; i++) {
    works += notes_[i];
  }

  auto works_grade = (works / 3) * 0.8;
  auto test_grade = notes_.back() * 0.2;

  auto average = test_grade + works_grade;

  return average;
}

double Calculus::average() const
{
  auto total = 0.0;

  for (auto note: notes_) {
    total += note;
  }

  return total/notes_.size();
}