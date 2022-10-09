/*
 * (Math: approximate the square root) How is the sqrt function in the cmath library implemented?
 * There are several techniques for implementing it.
 * One such technique is known as the Babylonian method.
 * It approximates the square root of a number, n, by repeatedly performing a calculation using the following
 * formula: nextGuess = (lastGuess + (n / lastGuess)) / 2
*/
#include <iostream>
#include <cmath>
using namespace std;

double sqrt(int n); //function prototype

int main()
{
    int n;

    //prompt user for an integer
    cout << "Enter an integer: ";
    cin >> n;

    //invoke the sqrt function and display result
    cout << "The square root of " << n << " is " << sqrt(n) << endl;
    return 0;
}

//function definition
double sqrt(int n)
{
    const double e = 0.0001;
    double lastGuess = 1; //initialise guess to be positive integer
    double nextGuess = (lastGuess + (n / lastGuess)) / 2; //formula to calculate approximate sqrt value
    double remain = abs(nextGuess - lastGuess); //difference btw the guess

    //loop for estimation
    while(remain > e)
    {
        lastGuess = nextGuess; //update guess
        nextGuess = (lastGuess + (n / lastGuess)) / 2; //update the approx. sqrt value
        remain = abs(nextGuess - lastGuess); //update loop
    }

    return nextGuess; //sqrt value
}