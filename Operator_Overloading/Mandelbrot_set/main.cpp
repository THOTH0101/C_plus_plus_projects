/*
 *(Mandelbrot set) A Mandelbrot set, named after Benoît Mandelbrot, is a set of points in the complex plane,
 * defined using the following iteration:
 *      zn + 1 = zn^2 + c.
 *
 * c is a complex number and the starting point of iteration is z0 = 0. For a given c, the iteration will
 * produce a sequence of complex numbers: {z0, z1, . . . , zn, . . .}. It can be shown that the sequence
 * either tends to infinity or stays bounded, depending on the value of c. For example, if c is 0, the
 * sequence is {0, 0, . . .}, which is bounded. If c is i, the sequence is {0, i, -1 + i, -i, -1 + i, . . .},
 * which is bounded. If c is 1 + i, the sequence is {0, 1 + i, 1 + 3i, . . .}, which is unbounded. It is known
 * that if the absolute value of a complex value zi in the sequence is greater than 2, then the sequence
 * is unbounded. The Mandelbrot set consists of the c value such that the sequence is bounded. For example,
 * 0 and i are in the Mandelbrot set. Write a program that prompts the user to enter a complex number c and
 * determines if it is in the Mandelbrot set. Your program should compute z1, z2, . . . , z60. If none of their
 * absolute value exceeds 2, we assume c is in the Mandelbrot set. Of course, there is always an error, but
 * 60 iterations usually are enough. You can use the Complex class defined in Programming Exercise 14.7 or
 * use the C++ complex class. The C++ complex class is a template class defined in the header file <complex>.
 * You should use complex<double> to create a complex number in this program.
 *
 * */
#include <iostream>
#include "Complex.h"
using namespace std;

bool isMandelbrotSet(const Complex& c);

int main()
{
    //prompts the user to enter a complex number c
    cout << "Enter a complex number:" << endl;
    Complex c;
    cin >> c;

    cout << "The complex number" << (isMandelbrotSet(c) ? " is " : " is not ") << "a mandelbrot set." << endl;

    return 0;
}

//function implementation
bool isMandelbrotSet(const Complex& c)
{
    Complex z0, z1;

    for(int i = 1; i < 60; i++)
    {
        z1 = z0 * z0 + c;

        if(z1.abs() > 2)
        {
            return false;
        }

        z0 = z1;
    }

    return true;
}