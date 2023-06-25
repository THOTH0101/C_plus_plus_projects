//
// Created by thoth on 6/20/23.
//

#include "Course.h"
#include <stdexcept>
#include <string>
using namespace std;
Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
}
Course::~Course()
{
    delete [] students;
}
string Course::getCourseName() const
{
    return courseName;
}
void Course::addStudent(const string& name)
{
    if(numberOfStudents >= capacity)
        throw runtime_error("Number of students has been exceeded");
    students[numberOfStudents] = name;
    numberOfStudents++;
}
void Course::dropStudent(const string& name)
{
    for(int i = 0; i < numberOfStudents; i++)
    {
        if(name == students[i])
            for(int j = i; j < numberOfStudents; j++)
                students[j] = students[j + 1];
    }
    students[numberOfStudents - 1] = string::npos;
    numberOfStudents--;
}
string* Course::getStudents() const
{
    return students;
}
int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}