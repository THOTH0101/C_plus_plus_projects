//
// Created by thoth on 2/24/23.
//

#ifndef THE_MYINTEGER_CLASS_MYINTEGER_H
#define THE_MYINTEGER_CLASS_MYINTEGER_H
#include <string>
using namespace std;

class MyInteger
{
public:
    int value;
    MyInteger(int newValue);
    int getValue() const;
    bool isEven() const;
    bool isOdd() const;
    bool isPrime() const;
    static bool isEven(int newValue);
    static bool isOdd(int newValue);
    static bool isPrime(int newValue);
    static bool isEven(const MyInteger& myInt);
    static bool isOdd(const MyInteger& myInt);
    static bool isPrime(const MyInteger& myInt);
    bool equals(int newValue) const;
    bool equals(const MyInteger& myInt) const;
    static int parseInt(const string& str);
};

#endif //THE_MYINTEGER_CLASS_MYINTEGER_H
