#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

int main()
{
    //prompts the user to enter values for a, b, and c
    cout << "Enter values for a, b, and c: ";
    double a, b, c;
    cin >> a >> b >> c;

    QuadraticEquation problem(a, b, c);

    if(problem.getDiscriminant() < 0)
        cout << "The equation has no real roots" << endl;
    else if(problem.getDiscriminant() == 0)
        cout << "The equation root is " << problem.getRoot1() << endl;
    else
        cout << "The equation root are " << problem.getRoot1() << " and " << problem.getRoot2() << endl;

    return 0;
}
