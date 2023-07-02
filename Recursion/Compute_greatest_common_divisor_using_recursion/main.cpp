/*
 * The gcd(m, n) can also be defined recursively as follows:
 *
 * * If m % n is 0, gcd (m, n) is n.
 * * Otherwise, gcd(m, n) is gcd(n, m % n).
 *
 * Write a recursive function to find the GCD. Write a test program that prompts the user to enter two
 * integers and displays their GCD.
 * */
#include <iostream>
using namespace std;

//function to find GCD of two integers
int gcd(int m, int n)
{
    if(m % n == 0)
        return n;
    else
        return gcd(n, m % n);
}

int main()
{
    //prompt user to enter two integers
    cout << "Enter two integers: ";
    int n1, n2;
    cin >> n1 >> n2;

    //display GCD
    cout << "The greatest common divisor of " << n1 << " and " << n2 << " is " << gcd(n1, n2) << endl;

    return 0;
}