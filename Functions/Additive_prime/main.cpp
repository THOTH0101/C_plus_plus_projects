/*
 * A prime number is called an Additive prime if the sum of its digits is also a prime number
 */

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
int sumOfDigits(int number);
bool isPrime(int number);
bool isAdditivePrime(int number);
void PrintAdditivePrime(int numberOfAdditionPrime);

int main()
{
    //Head Title
    cout << "Prime number\tSum of its digits\n";

    //invoke PrintAdditivePrime function
    PrintAdditivePrime(25);

    return 0;
}

//function definition
int sumOfDigits(int number) //function to sum the integer's digit
{
    int sum = 0; //sum initialise to 0

    //loop to extract its digit
    for(int i = number; i > 0; i /= 10)
    {
        int digit = i % 10;
        sum += digit; //add each digit to sum
    }

    return sum; //return the total value
}

bool isPrime(int number) //function to determine primeness
{
    //loop to check if integer is divisible by other factors
    for(int divisor = 2; divisor <= number / 2; divisor++)
    {
        //if true, number is not prime
        if(number % divisor == 0)
            return false; //number is not prime
    }

    return true; //number is prime
}

bool isAdditivePrime(int number) //function to determine additive primeness
{
    //check if number is prime
    if(isPrime(number))
    {
        //check sum of its digits for primeness
        if(isPrime(sumOfDigits(number)))
            return true; //number is additive prime
    }

    return false; //number is not additive prime
}

void PrintAdditivePrime(int numberOfAdditionPrime) //function to print number of certain amount of additive primes
{
    const int NUMBER_OF_ADDITIVE_PRIMES = numberOfAdditionPrime;
    int count = 0; //count number of additive prime
    int number = 2; //initialise number

    //loop for printing additive primes
    while(count < NUMBER_OF_ADDITIVE_PRIMES)
    {
        if(isPrime(number))
        {
            if(isAdditivePrime(number))
            {
                count++; //increase number counts

                //print the number and the sum of its digits
                cout << number << setw(6) << "\t\t\t" << sumOfDigits(number) << endl;
            }
        }

        number++; //increase number count
    }
}