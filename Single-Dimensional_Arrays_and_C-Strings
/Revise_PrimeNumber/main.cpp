#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int NUMBER_OF_PRIMES_PER_LINE = 10;
const int NUMBER_OF_PRIMES = 50;
bool isPrime(int number); //to check if number is prime
void createArray(int list[], int listSize); //to create new array with zero as element
void printArray(const int list[], int listSize); //to print array

int main()
{
    int primeNumber[NUMBER_OF_PRIMES];
    int index = 0;

    createArray(primeNumber, NUMBER_OF_PRIMES); //set the initial array to zero

    //loop to store primes
    for(int number = 2; index < NUMBER_OF_PRIMES; number++)
    {
        if(isPrime(number))
            primeNumber[index++] = number;
    }

    printArray(primeNumber, NUMBER_OF_PRIMES); //invoke to print array

    return 0;
}

//function definition
bool isPrime(int number)
{
    for(int i = 2; i <= sqrt(number); i++)
    {
        if(number % i == 0)
            return false;
    }

    return true;
}

void createArray(int list[], int listSize)
{
    for(int i = 0; i < listSize; i++)
        list[i] = 0;
}

void printArray(const int list[], int listSize)
{
    int count = 1;

    for(int i = 0; i < listSize; i++)
    {
        //conditional statement for printing pattern
        if(count % NUMBER_OF_PRIMES_PER_LINE == 0)
            cout << setw(4) << list[i] << endl;
        else
            cout << setw(4) << list[i] << " ";

        count++;
    }
}