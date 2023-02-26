#include <iostream>
#include "MyInteger.h"
using namespace std;

int main()
{
    MyInteger int1(20);
    MyInteger int2(17);
    MyInteger int3(65);
    MyInteger int4(20);

    //tests all functions in the class
    cout << "Is " << int1.getValue() << " even? " << (int1.isEven() ? "True" : "False") << endl;
    cout << "Is " << int2.getValue() << " even? " << (MyInteger::isEven(int2) ? "True" : "False") << endl;
    cout << "Is " << int3.getValue() << " even? " << (MyInteger::isEven(int3.getValue()) ? "True" : "False") << endl;

    cout << "Is " << int1.getValue() << " odd? " << (int1.isOdd() ? "True" : "False") << endl;
    cout << "Is " << int2.getValue() << " odd? " << (MyInteger::isOdd(int2) ? "True" : "False") << endl;
    cout << "Is " << int3.getValue() << " odd? " << (MyInteger::isOdd(int3.getValue()) ? "True" : "False") << endl;

    cout << "Is " << int2.getValue() << " prime? " << (int2.isPrime() ? "True" : "False") << endl;
    cout << "Is 93 prime? " << (MyInteger::isPrime(93) ? "True" : "False") << endl;
    cout << "Is " << int4.getValue() << " prime? " << (MyInteger::isPrime(int4) ? "True" : "False") << endl;

    cout << "Is " << int1.getValue() << " = " << int4.getValue() << ' '
    << (int1.equals(int4) ? "True" : "False") << endl;
    cout << "Is " << int3.getValue() << " = 15? " << (int3.equals(15) ? "True" : "False") << endl;

    cout << MyInteger::parseInt({'1', '3', '0'}) << endl;
    cout << MyInteger::parseInt("404") + MyInteger::parseInt("12");

    return 0;
}