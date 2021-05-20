cmake_minimum_required(VERSION 3.15)
project(school_input)

add_executable(school_input)

target_sources(
  school_input
  PRIVATE
    student.hpp
    student.cpp
    functions.hpp
    functions.cpp
    main.cpp
)
