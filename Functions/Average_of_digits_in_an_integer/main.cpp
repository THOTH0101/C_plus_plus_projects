#include <iostream>
using namespace std;

double averageDigits(long n);//function prototype

int main()
{
    long n;

    //prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> n;

    //print the average
    cout << "The average of digits in the integer " << n << " is " << averageDigits(n) << endl;

    return 0;
}

//averageDigits function definition
double averageDigits(long n)
{
    double sum = 0;
    int count = 0;

    //use loop to break the integer into individual digits
    while(n > 0)
    {
        count++;
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    return sum / count;
}
