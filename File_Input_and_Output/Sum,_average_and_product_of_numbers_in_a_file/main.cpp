/*
 * Suppose that a text file Exercise13_3.txt contains six integers. Write a program that reads integers
 * from the file and displays their sum, average and product. Integers are separated by blanks.
 *
 * */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("Exercise13_3.txt");

    if(input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    int sum = 0, average, product = 1;

    int integer;

    while(input >> integer)
    {
        sum += integer;
        product *= integer;
    }

    input.close();
    average = sum / 6;

    cout << "The integer sum is " << sum << endl;
    cout << "The integer average is " << average << endl;
    cout << "The integer product is " << product << endl;

    return 0;
}