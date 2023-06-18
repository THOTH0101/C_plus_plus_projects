cmake_minimum_required(VERSION 3.23)
project(Extend_MyPoint)

set(CMAKE_CXX_STANDARD 14)

add_executable(Extend_MyPoint main.cpp MyPoint.cpp MyPoint.h ThreeDPoint.cpp ThreeDPoint.h)
