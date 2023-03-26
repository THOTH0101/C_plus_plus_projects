//
// Created by thoth on 3/26/23.
//

#ifndef THE_COURSE_CLASS_COURSE_H
#define THE_COURSE_CLASS_COURSE_H

#include <string>
using namespace std;
class Course
{
public:
    Course(const string& courseName, int capacity);
    ~Course(); // Destructor
    Course(const Course&); // Copy constructor
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    void clear();
    string* getStudents() const;
    int getNumberOfStudents() const;

private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif //THE_COURSE_CLASS_COURSE_H
