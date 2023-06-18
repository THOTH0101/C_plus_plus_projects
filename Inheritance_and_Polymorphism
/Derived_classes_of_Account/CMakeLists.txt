cmake_minimum_required(VERSION 3.23)
project(Derived_classes_of_Account)

set(CMAKE_CXX_STANDARD 14)

add_executable(Derived_classes_of_Account main.cpp Account.cpp Account.h CheckingAccount.cpp CheckingAccount.h SavingAccount.cpp SavingAccount.h)
