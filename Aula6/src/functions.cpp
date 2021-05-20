#include <istream>
#include <string>
#include <sstream>
#include <iostream>
#include <memory>

#include "functions.hpp"
#include "student.hpp"
#include "course.hpp"

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

  std::unique_ptr<Course> read_subject_infos(std::istream& input)
  {
    auto subject_name = read_string(input);

    if (subject_name == "Data Structures") {
      auto grades = std::vector<double>{
        read_double(input),
        read_double(input),
        read_double(input),
        read_double(input)
      };

      auto object = DataStructures{grades};
      return std::make_unique<DataStructures>(object);
    }

    auto grades = std::vector<double>{
      read_double(input),
      read_double(input),
      read_double(input)
    };

    auto object = Calculus{grades};
    return std::make_unique<Calculus>(object);
  }

  school::Student read_student(std::istream& input)
  {
    auto name = read_string(input);
    auto year = read_int(input);
    auto n_subjects = read_int(input);

    auto subjects = std::vector<std::unique_ptr<Course>>{};

    for (int i = 0u; i < n_subjects; i++) {
      subjects.push_back(read_subject_infos(input));
    }

    return {
      name, year, std::move(subjects)
    };
  }
}

namespace school {
void display_students(std::vector<Student> const& students)
{
  for (auto& student: students) {
    auto notes = student.averages();

    std::cout << student.name() << " - " << "Médias: ";
    for (auto i = 0u; i < notes.size(); i++) {
      std::cout << notes[i];
      if (i == notes.size() - 1) {
        std::cout << "\n";
      } else {
        std::cout << ", ";
      }
    }
  }
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