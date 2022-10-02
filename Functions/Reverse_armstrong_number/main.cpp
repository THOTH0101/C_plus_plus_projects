#include <iostream>
#include <cmath>
using namespace std;

//functions prototype
int cubeOfDigits(int number);
int reverseInteger(int number);
bool isArmstrong(int sum, int number);

int main()
{
    int number, reverse;

    //prompt user to enter an integer
    cout << "Enter an integer: ";
    cin >> number;

    //check if integer is an armstrong integer
    if(isArmstrong(cubeOfDigits(number), number))
    {
        reverse = reverseInteger(number);

        if(isArmstrong(cubeOfDigits(reverse), reverse))
            cout << "Integer is an armstrong integer.";
        else
            cout << "Integer is not an armstrong integer." << endl;

    }
    else
        cout << "Integer is not an armstrong integer." << endl;

    return 0;
}

//functions definition

int reverseInteger(int number)
{
    int reverse = 0;

    //reverse the integer
    while(number != 0)
    {
        int rem = number % 10;
        reverse = reverse * 10 + rem;
        number /= 10;
    }

    return reverse;
}

int cubeOfDigits(int number)
{
    int sum = 0;
    int count = 0;

    //count the number digits
    for(int i = number; i > 0; i /= 10)
    {
        count++;
    }

    //use loop to break the integer into digits
    while(number > 0)
    {
        int digit = number % 10;
        sum += pow(digit, count);
        number /= 10;
    }

    return sum;
}

bool isArmstrong(int sum, int number)
{
    return sum == number;
}