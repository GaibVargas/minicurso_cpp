#include <iostream>
#include <fstream>

#include "student.hpp"
#include "functions.hpp"

int _main(std::istream& in)
{
  auto students = school::read_students(in);
  school::display_students(students);

  return 0;
}

int main(int argc, char** argv)
{
  if (argc == 1) {
    return _main(std::cin);
  }

  auto file = std::ifstream{argv[1]};

  return _main(file);
}
