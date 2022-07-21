#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUMBER_OF_INTEGER = 100;
    const int NUMBER_OF_NON_PRIMES_PER_LINE = 5;
    int integer = 1;
    int count = 0;

    cout << "The Non-prime numbers between 1 and 100 are\n";
    while(integer <= NUMBER_OF_INTEGER)
    {
        bool isNonprime = false;
        for(int divisor = 2; divisor <= integer / 2; divisor++)
        {
            if(integer % divisor == 0)
            {
                isNonprime = true;
            }
        }
        if(isNonprime)
        {
            count++;
            if(count % NUMBER_OF_NON_PRIMES_PER_LINE == 0)
                cout << setw(4) << integer << endl;
            else
                cout << setw(4) << integer;
        }
        integer++;
    }
    return 0;
}