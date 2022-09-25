#include <iostream>
using namespace std;

void displayPattern(int n);//function prototype

int main()
{
    int n;

    //prompt user to enter number of lines to print
    cout << "Enter number of pattern lines to print: ";
    cin >> n;

    //call displayPattern function
    displayPattern(n);

    return 0;
}

//function definition
void displayPattern(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
            cout << "*";
        cout << endl;
    }
}