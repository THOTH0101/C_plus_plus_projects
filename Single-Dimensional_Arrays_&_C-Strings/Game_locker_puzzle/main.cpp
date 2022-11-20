/*
 *  A school has 100 lockers and 100 students. All lockers are closed on the first day of school.
 *  As the students enter, the first student, denoted S1, opens every locker.
 *  Then the second student, S2, begins with the second locker, denoted L2, and closes every other locker.
 *  Student S3 begins with the third locker and changes every third locker (closes it if it was open, and opens
 *  it if it was closed). Student S4 begins with locker L4 and changes every fourth locker.
 *  Student S5 starts with L5 and changes every fifth locker, and so on, until student S100 changes L100.
 */

#include <iostream>
using namespace std;

int main()
{
    const int NUMBER_OF_STUDENT_LOCKERS = 100; //number of students and lockers
    bool locker[NUMBER_OF_STUDENT_LOCKERS]; //array of boolean values

    for(int i = 0; i < NUMBER_OF_STUDENT_LOCKERS; i++) //student s1 opens all locker
        locker[i] = true;

    for(int k = 1; k < NUMBER_OF_STUDENT_LOCKERS; k++)
    {
        //each nth student opens every nth locker(.i.e if close, otherwise closes it)
        for(int l = k; l < NUMBER_OF_STUDENT_LOCKERS; l+= k + 1)
        {
            if(!locker[l])
                locker[l] = true;
            else
                locker[l] = false;
        }
    }

    //loop to print the remaining open locker
    for(int m = 0; m < NUMBER_OF_STUDENT_LOCKERS; m++)
    {
        if(locker[m])
            cout << "Locker " << m + 1 << " open" << endl;
    }

    return 0;
}