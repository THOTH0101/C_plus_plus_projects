#include <iostream>
using namespace std;

void countDigits(const int& number, int dArray[], int size); //function prototype

int main()
{
    const int SIZE = 10;
    int digits[SIZE];

    //prompts the user to enter an integer
    cout << "Enter an integer: ";
    int integer;
    cin >> integer;

    countDigits(integer, digits, SIZE);

    return 0;
}

//function implementation
void countDigits(const int& number, int dArray[], int size)
{
    //for loop to count each digit
    for(int i = number; i > 0; i /= 10)
    {
        dArray[i % 10]++;
    }

    //display counts
    for(int j = 0; j < size; j++)
    {
        if((j + 1) % 5 == 0)
            cout << j << '(' << dArray[j] << ')' << endl;
        else
            cout << j << '(' << dArray[j] << ')' << ' ';
    }
}