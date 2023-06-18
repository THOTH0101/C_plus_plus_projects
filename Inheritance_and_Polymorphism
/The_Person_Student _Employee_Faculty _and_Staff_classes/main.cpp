/*
 *  Design a class named Person and its two derived classes named Student and Employee. Make Faculty
 *  and Staff derived classes of Employee. A person has a name, address, phone number, and e-mail address.
 *  A student has a class status (fresh-man, sophomore, junior, or senior). An employee has an office,
 *  salary, and date-hired. Define a class named MyDate that contains the fields year, month, and day.
 *  A faculty member has office hours and a rank. A staff member has a title. Define a constant virtual
 *  toString function in the Person class and override it in each class to display the class name and the
 *  person’s name.
 *  Draw the UML diagram for the classes. Implement the classes. Write a test program that creates a Person,
 *  Student, Employee, Faculty, and Staff, and invokes their toString() functions.
 *
 * */
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include "Staff.h"
#include "MyDate.h"
using namespace std;

int main()
{
    MyDate date(2001, 9, 02); //date object for hired date

    //object from each class
    Person person("Jason Claymore", "west-land avenue", "502-185-2456",
                  "jason@gmail.com");
    Student student("sophomore", "Zoe Wilson", "north-ville district",
                    "504-456-9632", "zoexoxo@hotmail.com");
    Employee employee("Admin office", 50745.56, date, "West Montague",
                      "cincinnati park", "502-471-9665", "westmontague@hotmail.com");
    Faculty faculty(8, "Senior lecturer", "Mary hale", "wet-land avenue",
                    "810-587-2194", "maryh@yahoo.com");
    Staff staff("Professor", "Walter White", "new-mexico", "801-140-0028",
                "waltw@gmail.com");

    //invoke toString() function
    cout << "Person toString():\n" << person.toString() << endl;
    cout << "Student toString():\n" << student.toString() << endl;
    cout << "Employee toString():\n" << employee.toString() << endl;
    cout << "Faculty toString():\n" << faculty.toString() << endl;
    cout << "Staff toString():\n" << staff.toString() << endl;

    return 0;
}
