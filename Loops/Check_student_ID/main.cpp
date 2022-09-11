#include <iostream>
#include <string>
using namespace std;

int main()
{
   string studentId;

   //prompt the student to enter a student ID
   cout << "Enter a Student ID: ";
   cin >> studentId;

   //initialise a isStudentID bool
   bool isStudentId = false;

   //check if the student ID follows the college rules
   for(int i = 0; i < studentId.length(); i++)
   {
       if(studentId.size() == 10 && isdigit(studentId.at(0)) && isalnum(studentId.at(i)))
         isStudentId = true;
   }

   //prompt if it's valid or not
    if(isStudentId)
        cout << "Valid Student ID" << endl;
    else
        cout << "Invalid Student ID" << endl;

    return 0;
}
