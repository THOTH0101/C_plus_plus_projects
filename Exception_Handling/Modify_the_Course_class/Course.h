//
// Created by thoth on 6/20/23.
//

#ifndef MODIFY_THE_COURSE_CLASS_COURSE_H
#define MODIFY_THE_COURSE_CLASS_COURSE_H

#include <string>
using namespace std;
class Course
{
public:
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif //MODIFY_THE_COURSE_CLASS_COURSE_H
