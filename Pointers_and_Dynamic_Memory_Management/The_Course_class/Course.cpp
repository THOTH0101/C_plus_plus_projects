//
// Created by thoth on 3/26/23.
//

#include "Course.h"
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
    // if the array capacity is exceeded
    if(numberOfStudents >= capacity)
    {
        auto* temp = new string[capacity * 2];//create a larger array
        capacity = capacity * 2;//increase capacity by twice the size

        //copy all elements in old array
        for(int i = 0; i < numberOfStudents; i++)
            temp[i] = students[i];

        delete [] students;//delete old array
        students = temp;//assign created temp to original students
    }

    //add student
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
    students[numberOfStudents - 1] = "";
    numberOfStudents--;
}

void Course::clear()
{
    auto* temp = new string[capacity];//create empty array
    delete [] students;//delete old array
    students = temp;//reassign original
    numberOfStudents = 0;
}

string* Course::getStudents() const
{
    return students;
}
int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}
Course::Course(const Course& course)//Copy constructor
{
    courseName = course.courseName;
    numberOfStudents = course.numberOfStudents;
    capacity = course.capacity;
    students = new string[capacity];
}