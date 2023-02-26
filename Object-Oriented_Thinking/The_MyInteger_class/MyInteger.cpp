//
// Created by thoth on 2/24/23.
//

#include "MyInteger.h"
#include <string>
using namespace std;

MyInteger::MyInteger(int newValue)
{
    value = newValue;
}

int MyInteger::getValue() const
{
    return value;
}

bool MyInteger::isEven() const
{
    if(value % 2 == 0)
        return true;

    return false;
}

bool MyInteger::isOdd() const
{
    if(value % 2 == 1)
        return true;

    return false;
}

bool MyInteger::isPrime() const
{
    //loop to check if integer is divisible by other factors
    for(int divisor = 2; divisor <= value / 2; divisor++)
    {
        //if true, number is not prime
        if(value % divisor == 0)
            return false; //number is not prime
    }

    return true; //number is prime
}

bool MyInteger::isEven(int newValue)
{
    if(newValue % 2 == 0)
        return true;

    return false;
}

bool MyInteger::isOdd(int newValue)
{
    if(newValue % 2 == 1)
        return true;

    return false;
}

bool MyInteger::isPrime(int newValue)
{
    //loop to check if integer is divisible by other factors
    for(int divisor = 2; divisor <= newValue / 2; divisor++)
    {
        //if true, number is not prime
        if(newValue % divisor == 0)
            return false; //number is not prime
    }

    return true; //number is prime
}

bool MyInteger::isEven(const MyInteger& myInt)
{
    return myInt.isEven();
}

bool MyInteger::isOdd(const MyInteger &myInt)
{
    return myInt.isOdd();
}

bool MyInteger::isPrime(const MyInteger &myInt)
{
    return myInt.isPrime();
}

bool MyInteger::equals(int newValue) const
{
    if(value == newValue)
        return true;

    return false;
}

bool MyInteger::equals(const MyInteger &myInt) const
{
    if(myInt.value == value)
        return true;

    return false;
}

int MyInteger::parseInt(const std::string &str)
{
    return stoi(str);
}