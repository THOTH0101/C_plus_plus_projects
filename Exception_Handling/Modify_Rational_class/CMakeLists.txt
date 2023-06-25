cmake_minimum_required(VERSION 3.23)
project(Modify_Rational_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(Modify_Rational_class main.cpp Rational.cpp Rational.h IllegalSubscriptException.h)
