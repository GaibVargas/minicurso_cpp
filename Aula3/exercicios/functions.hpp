#ifndef SCHOOL_STUDENT_FUNCTIONS_HPP
#define SCHOOL_STUDENT_FUNCTIONS_HPP
#include <string>
#include <vector>
#include "student.hpp"

namespace school {

std::vector<school::Student> approved(std::vector<school::Student> const&);
std::vector<school::Student> dismissed_by_time(std::vector<school::Student> const&, int year);

}

#endif