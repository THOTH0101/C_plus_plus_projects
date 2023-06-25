/*
 *  Rewrite the addStudent function in the Course class in Listing 11.16, Course.cpp to throw a runtime_error
 *  if the number of students exceeds the capacity.
 *
 * */
#include <iostream>
#include <stdexcept>
#include "Course.h"
using namespace std;
int main()
{
    try {
        Course course1("Data Structures", 3);
        course1.addStudent("Peter Jones");
        course1.addStudent("Brian Smith");
        course1.addStudent("Anne Kennedy");
        course1.addStudent("Steve Smith");

        cout << "Number of students in course1: " << course1.getNumberOfStudents() << "\n";

        string *students = course1.getStudents();

        for (int i = 0; i < course1.getNumberOfStudents(); i++)
            cout << students[i] << ", ";

        cout << "\nNumber of students in course2: " << course1.getNumberOfStudents() << endl;
    }
    catch(runtime_error& ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}