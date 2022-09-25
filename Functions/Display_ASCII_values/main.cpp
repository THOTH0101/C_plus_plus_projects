#include <iostream>
#include <iomanip>
using namespace std;

void printASCII(char ch1, char ch2, int numberPerLine);//function prototype

int main()
{
    char start;
    char end;
    int numberPerLine;

    //prompt user to enter the start, end, and number of character to be display per line
    cout << "Enter the start character: ";
    cin >> start;
    cout << "Enter the end character: ";
    cin >> end;
    cout << "Enter the number of character per line: ";
    cin >> numberPerLine;

    //Print the ASCII values
    cout << "The ASCII values of character starting from " << start << " to " << end << " are:" << endl;

    //invoke the printASCII function
    printASCII(start, end, numberPerLine);

    return 0;
}

//function definition
void printASCII(char ch1, char ch2, int numberPerLine)
{
    int count = 0;

    for(int i = ch1; i <= ch2; i++)
    {
        count++;

        if(count % numberPerLine == 0)
            cout << setw(4)  << i << endl;
        else
            cout << setw(4) << i << " ";
    }
}