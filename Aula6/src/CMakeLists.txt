cmake_minimum_required(VERSION 3.15)
project(school_inherit)

add_executable(school_inherit)

target_sources(
  school_inherit
  PRIVATE
    course.hpp
    course.cpp
    student.hpp
    student.cpp
    functions.hpp
    functions.cpp
    main.cpp
)
