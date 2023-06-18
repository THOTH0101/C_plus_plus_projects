cmake_minimum_required(VERSION 3.23)
project(The_Triangle_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(The_Triangle_class main.cpp GeometricObject.cpp GeometricObject.h Triangle.cpp Triangle.h)
