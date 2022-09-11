#include <iostream>
using namespace std;

int main()
{
    short integer;

    //prompt user to enter a short integer
    cout << "Enter an integer: ";
    cin >> integer;


    //display the result
    cout << "The bits are ";

    // Get the 16 bits for the integer
    for (int i = 16; i >= 0; i--)
        cout << (((integer >> i) % 2) ? '1' : '0');

    cout << endl;

    return 0;
}