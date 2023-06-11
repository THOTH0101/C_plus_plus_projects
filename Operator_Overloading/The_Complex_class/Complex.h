//
// Created by thoth on 6/9/23.
//

#ifndef THE_COMPLEX_CLASS_COMPLEX_H
#define THE_COMPLEX_CLASS_COMPLEX_H

#include <string>
#include <iostream>
using namespace std;

class Complex
{
public:
    Complex();
    Complex(double a);
    Complex(double a, double b);
    double getRealPart() const;
    double getImaginaryPart() const;
    double abs() const;
    Complex add(const Complex& secondComplex) const;
    Complex subtract(const Complex& secondComplex) const;
    Complex multiply(const Complex& secondComplex) const;
    Complex divide(const Complex& secondComplex) const;
    string toString() const;

    //define function operators for augmented operators
    Complex& operator+=(const Complex& secondComplex);
    Complex& operator-=(const Complex& secondComplex);
    Complex& operator*=(const Complex& secondComplex);
    Complex& operator/=(const Complex& secondComplex);

    //define function operator []
    double& operator[](int index);

    //define unary operators
    Complex operator+();
    Complex operator-() const;

    //define function operator for prefix ++ and --
    Complex& operator++();
    Complex& operator--();

    //define function operator for postfix ++ and --
    Complex operator++(int dummy);
    Complex operator--(int dummy);

    //define << and >> operators
    friend ostream& operator<<(ostream& out, const Complex& complex);
    friend istream& operator>>(istream& in, Complex& complex);

private:
    double a;
    double b;
};

//define the operators +, -, *, / as nonmember functions
Complex operator+(const Complex& c1, const Complex& c2);
Complex operator-(const Complex& c1, const Complex& c2);
Complex operator*(const Complex& c1, const Complex& c2);
Complex operator/(const Complex& c1, const Complex& c2);

#endif //THE_COMPLEX_CLASS_COMPLEX_H