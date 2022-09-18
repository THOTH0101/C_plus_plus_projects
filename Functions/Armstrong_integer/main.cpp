#include <iostream>
using namespace std;

//functions prototype
int cubeOfDigits(int number);
void isArmstrong(int sum, int number);

int main()
{
    int number;

    //prompt user to enter an integer
    cout << "Enter an integer: ";
    cin >> number;

    //check if integer is an armstrong integer
    isArmstrong(cubeOfDigits(number), number);

    return 0;
}

//functions definition
int cubeOfDigits(int number)
{
    int sum = 0;

    //use loop to break the integer into digits
    while(number > 0)
    {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    return sum;
}

void isArmstrong(int sum, int number)
{
    // Displays if integer is an Armstrong integer
    if(sum == number)
        cout << "Integer is an armstrong integer." << endl;
    else
        cout << "Integer is not an armstrong integer." << endl;
}
