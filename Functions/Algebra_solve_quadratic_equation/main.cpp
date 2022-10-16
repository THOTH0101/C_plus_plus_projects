#include <iostream>
#include <cmath>
using namespace std;

//function prototype
void solveQuadraticEquation(double a, double b, double c, double& discriminant, double& r1, double& r2);

int main()
{
    double discriminant;
    double a, b, c, r1, r2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    //invoke solveQuadraticEquation function
    solveQuadraticEquation(a, b, c, discriminant, r1, r2);

    return 0;
}

//function definition
void solveQuadraticEquation(double a, double b, double c, double& discriminant, double& r1, double& r2)
{
    discriminant = pow(b, 2) - (4 * a * c); //to determine the discriminant

    //determine the two roots
    r1 = (-b + sqrt(discriminant)) / (2 * a); //first root
    r2 = (-b - sqrt(discriminant)) / (2 * a); //second root

    if(discriminant > 0)
        cout << "The roots are " << r1 << " and " << r2 << endl;
    else if(discriminant == 0)
        cout << "The root is " << r1 << endl;
    else
        cout << "The equation has no roots" << endl;
}