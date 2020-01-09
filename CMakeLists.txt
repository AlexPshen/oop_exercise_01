cmake_minimum_required(VERSION 3.5)

project(oop_exercise_01)

add_executable(oop_exercise_01
               main.cpp
               budget.cpp
)

set_property(TARGET oop_exercise_01 PROPERTY CXX_STANDARD 11)

