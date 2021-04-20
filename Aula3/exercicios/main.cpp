#include <iostream>
#include <string>
#include <vector>

#include "student.hpp"
#include "functions.hpp"

int main()
{
  using namespace std::string_literals;
  using school::Student;

  // TODO: initialize a vector called `students` here
  auto student1 = school::Student{"Aluno1", 2020, {5, 5.5, 7}};
  auto student2 = school::Student{"Aluno2", 2015, {8, 4, 6}};
  auto student3 = school::Student{"Aluno3", 2010, {4, 8, 9}};

  auto students = std::vector<school::Student>{student1, student2, student3};

  for (auto s : school::approved(students))
  {
    std::cout << s.name()
              << " is approved by grade with average "
              << s.average() << ".\n";
  }

  for (auto s : school::dismissed_by_time(students, 2020))
  {
    std::cout << s.name()
              << " was dismissed for being in the course for too long: "
              << s.years_enrolled(2020) << " years.\n";
  }
}
