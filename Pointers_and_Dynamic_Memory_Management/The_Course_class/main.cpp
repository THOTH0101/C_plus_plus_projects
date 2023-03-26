/*
 * (The Course class) Revise the Course class implementation in Listing 11.16, Course.cpp, as follows:
 * * When adding a new student to the course, if the array capacity is exceeded,
 * increase the array size by creating a new larger array and copying the contents of the current array to it.
 * * Implement the dropStudent function.
 * * Add a new function named clear() that removes all students from the course.
 * * Implement the destructor and copy constructor to perform a deep copy in the class.
 * Write a test program that creates a course, adds three students, removes one, and
 * displays the students in the course.
 *
 * */

#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
    //create a course object
    Course course("COS201", 2);

    //add students
    course.addStudent("williams");
    course.addStudent("edward");
    course.addStudent("james");

    //remove student
    course.dropStudent("edward");

    //displays the students in the course
    cout << course.getNumberOfStudents() << " students offering course " << course.getCourseName() << " are: ";

    for(int i = 0; i < course.getNumberOfStudents(); i++)
        cout << course.getStudents()[i] << ", ";

    return 0;
}
