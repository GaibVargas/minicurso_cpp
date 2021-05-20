#ifndef SCHOOL_STUDENT_FUNCTIONS_HPP
#define SCHOOL_STUDENT_FUNCTIONS_HPP

#include <string>
#include <iosfwd>
#include <vector>

#include "student.hpp"

namespace school {

void display_students(std::vector<Student> const&);
std::vector<Student> read_students(std::istream&);

}

#endif