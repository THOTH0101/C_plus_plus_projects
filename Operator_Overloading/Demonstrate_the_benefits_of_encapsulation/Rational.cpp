//
// Created by thoth on 6/7/23.
//

#include "Rational.h"
#include <sstream>
#include <cstdlib> // For the abs function

Rational::Rational()
{
    r[0] = 0;
    r[1] = 1;
}

Rational::Rational(int numerator, int denominator)
{
    int factor = gcd(numerator, denominator);
    r[0] = (denominator > 0 ? 1 : -1) * numerator / factor;
    r[1] = abs(denominator) / factor;
}

int Rational::getNumerator() const
{
    return r[0];
}

int Rational::getDenominator() const
{
    return r[1];
}

// Find GCD of two numbers
int Rational::gcd(int n, int d)
{
    int n1 = abs(n);
    int n2 = abs(d);
    int gcd = 1;
    for (int k = 1; k <= n1 && k <= n2; k++)
    {
        if (n1 % k == 0 && n2 % k == 0)
            gcd = k;
    }
    return gcd;
}

Rational Rational::add(const Rational& secondRational) const
{
    int n = r[0] * secondRational.getDenominator() +
            r[1] * secondRational.getNumerator();
    int d = r[1] * secondRational.getDenominator();
    return Rational(n, d);
}

Rational Rational::subtract(const Rational& secondRational) const
{
    int n = r[0] * secondRational.getDenominator()
            - r[1] * secondRational.getNumerator();
    int d = r[1] * secondRational.getDenominator();
    return Rational(n, d);
}

Rational Rational::multiply(const Rational& secondRational) const
{
    int n = r[0] * secondRational.getNumerator();
    int d = r[1] * secondRational.getDenominator();
    return Rational(n, d);
}

Rational Rational::divide(const Rational& secondRational) const
{
    int n = r[0] * secondRational.getDenominator();
    int d = r[1] * secondRational.getNumerator();
    return Rational(n, d);
}

int Rational::compareTo(const Rational& secondRational) const
{
    Rational temp = subtract(secondRational);
    if (temp.getNumerator() < 0)
        return -1;
    else if (temp.getNumerator() == 0)
        return 0;
    else
        return 1;
}

bool Rational::equals(const Rational& secondRational) const
{
    if (compareTo(secondRational) == 0)
        return true;
    else
        return false;
}

int Rational::intValue() const
{
    return getNumerator() / getDenominator();
}

double Rational::doubleValue() const
{
    return 1.0 * getNumerator() / getDenominator();
}

string Rational::toString() const
{
    stringstream ss;
    ss << r[0];
    if (r[1] > 1)
        ss << "/" << r[1];
    return ss.str();
}

Rational::Rational(int numerator) // Suitable for type conversion
{
    r[0] = numerator;
    r[1] = 1;
}

// Define function operators for augmented operators
Rational& Rational::operator+=(const Rational& secondRational)
{
    *this = add(secondRational);
    return *this;
}

Rational& Rational::operator-=(const Rational& secondRational)
{
    *this = subtract(secondRational);
    return *this;
}

Rational& Rational::operator*=(const Rational& secondRational)
{
    *this = multiply(secondRational);
    return *this;
}

Rational& Rational::operator/=(const Rational& secondRational)
{
    *this = divide(secondRational);
    return *this;
}

// Define function operator []
int& Rational::operator[](int index)
{
    if (index == 0)
        return r[0];
    else
        return r[1];
}

// Define function operators for prefix ++ and --
Rational& Rational::operator++()
{
    r[0] += r[1];
    return *this;
}

Rational& Rational::operator--()
{
    r[0] -= r[1];
    return *this;
}

// Define function operators for postfix ++ and --
Rational Rational::operator++(int dummy)
{
    Rational temp(r[0], r[1]);
    r[0] += r[1];
    return temp;
}

Rational Rational::operator--(int dummy)
{
    Rational temp(r[0], r[1]);
    r[0] -= r[1];
    return temp;
}

// Define function operators for unary + and -
Rational Rational::operator+()
{
    return *this;
}

Rational Rational::operator-()
{
    return Rational(-r[0], r[1]);
}

// Define the output and input operator
ostream& operator<<(ostream& out, const Rational& rational)
{
    if (rational.r[1] == 1)
        out << rational.r[0];
    else
        out << rational.r[0] << "/" << rational.r[1];
    return out;
}

istream& operator>>(istream& in, Rational& rational)
{
    cout << "Enter numerator: ";
    in >> rational.r[0];
    cout << "Enter denominator: ";
    in >> rational.r[1];
    return in;
}

// Define function operators for relational operators
bool operator<(const Rational& r1, const Rational& r2)
{
    return r1.compareTo(r2) < 0;
}

bool operator<=(const Rational& r1, const Rational& r2)
{
    return r1.compareTo(r2) <= 0;
}

bool operator>(const Rational& r1, const Rational& r2)
{
    return r1.compareTo(r2) > 0;
}

bool operator>=(const Rational& r1, const Rational& r2)
{
    return r1.compareTo(r2) >= 0;
}

bool operator==(const Rational& r1, const Rational& r2)
{
    return r1.compareTo(r2) == 0;
}

bool operator!=(const Rational& r1, const Rational& r2)
{
    return r1.compareTo(r2) != 0;
}

// Define nonmember function operators for arithmetic operators
Rational operator+(const Rational& r1, const Rational& r2)
{
    return r1.add(r2);
}

Rational operator-(const Rational& r1, const Rational& r2)
{
    return r1.subtract(r2);
}

Rational operator*(const Rational& r1, const Rational& r2)
{
    return r1.multiply(r2);
}

Rational operator/(const Rational& r1, const Rational& r2)
{
    return r1.divide(r2);
}