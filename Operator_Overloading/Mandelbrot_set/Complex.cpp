//
// Created by thoth on 6/10/23.
//

#include <sstream>
#include <cmath>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
    a = 0;
    b = 0;
}

Complex::Complex(double a)
{
    this->a = a;
    b = 0;
}

Complex::Complex(double a, double b)
{
    this->a = a;
    this->b = b;
}

double Complex::getRealPart() const
{
    return a;
}

double Complex::getImaginaryPart() const
{
    return b;
}

double Complex::abs() const
{
    return sqrt(a*a + b*b);
}

Complex Complex::add(const Complex &secondComplex) const
{
    double r = this->a + secondComplex.getRealPart();
    double i = this->b + secondComplex.getImaginaryPart();
    return {r, i};
}

Complex Complex::subtract(const Complex &secondComplex) const
{
    double r = this->a - secondComplex.getRealPart();
    double i = this->b - secondComplex.getImaginaryPart();
    return {r, i};
}

Complex Complex::multiply(const Complex &secondComplex) const
{
    double r = a*secondComplex.getRealPart() - b*secondComplex.getImaginaryPart();
    double i = b*secondComplex.getRealPart() + a*secondComplex.getImaginaryPart();
    return {r, i};
}

Complex Complex::divide(const Complex &secondComplex) const
{
    double r = (a*secondComplex.getRealPart() + b*secondComplex.getImaginaryPart())
               / (pow(secondComplex.getRealPart(), 2) + pow(secondComplex.getImaginaryPart(), 2));

    double i = (b*secondComplex.getRealPart() - a*secondComplex.getImaginaryPart())
               / (pow(secondComplex.getRealPart(), 2) + pow(secondComplex.getImaginaryPart(), 2));

    return {r, i};
}

string Complex::toString() const
{
    stringstream ss;
    ss << a;

    if(b > 0)
        ss << " + " << b << "i";
    else if(b < 0)
        ss << " - " << b << "i";
    return ss.str();
}

Complex &Complex::operator+=(const Complex &secondComplex)
{
    *this = add(secondComplex);
    return *this;
}

Complex &Complex::operator-=(const Complex &secondComplex)
{
    *this = subtract(secondComplex);
    return *this;
}

Complex &Complex::operator*=(const Complex &secondComplex)
{
    *this = multiply(secondComplex);
    return *this;
}

Complex &Complex::operator/=(const Complex &secondComplex)
{
    *this = divide(secondComplex);
    return *this;
}

double &Complex::operator[](int index)
{
    if(index == 0)
        return a;
    else
        return b;
}

Complex Complex::operator+()
{
    return *this;
}

Complex Complex::operator-() const
{
    return {-a, -b};
}

Complex &Complex::operator++()
{
    a++; b++;
    return *this;
}

Complex &Complex::operator--()
{
    a--; b--;
    return *this;
}

Complex Complex::operator++(int dummy)
{
    Complex temp(a, b);
    a++; b++;
    return temp;
}

Complex Complex::operator--(int dummy)
{
    Complex temp(a, b);
    a--; b--;
    return temp;
}

ostream& operator<<(ostream& out, const Complex& complex)
{
    if(complex.getImaginaryPart() == 0)
        out << complex.getRealPart();
    else if(complex.getImaginaryPart() < 0)
        out << complex.getRealPart() << " - " << abs(complex.getImaginaryPart()) << "i";
    else
        out << complex.getRealPart() << " + " << complex.getImaginaryPart() << "i";
    return out;
}

istream& operator>>(istream& in, Complex& complex)
{
    cout << "Enter the real part: ";
    in >> complex.a;

    cout << "Enter the imaginary part: ";
    in >> complex.b;
    return in;
}

Complex operator+(const Complex& c1, const Complex& c2)
{
    return c1.add(c2);
}

Complex operator-(const Complex& c1, const Complex& c2)
{
    return c1.subtract(c2);
}

Complex operator*(const Complex& c1, const Complex& c2)
{
    return c1.multiply(c2);
}

Complex operator/(const Complex& c1, const Complex& c2)
{
    return c1.divide(c2);
}