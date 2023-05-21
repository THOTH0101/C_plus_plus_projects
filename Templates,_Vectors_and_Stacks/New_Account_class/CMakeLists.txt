cmake_minimum_required(VERSION 3.23)
project(New_Account_class)

set(CMAKE_CXX_STANDARD 14)

add_executable(New_Account_class main.cpp Account.h Transaction.cpp Transaction.h Date.cpp Date.h)
