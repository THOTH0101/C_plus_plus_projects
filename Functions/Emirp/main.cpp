#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
int revInteger(int number);
bool isPrime(int number);
bool isEmirp(int number);
void printEmirpNumber(int numberOfEmirp);

int main()
{
    //head title
    cout << "***************The first 100 Emirp numbers are****************\n";

    //invoke the printEmirpNumber function
    printEmirpNumber(100);

    return 0;
}

//function definition
int revInteger(int number)//function to reverse integer
{
    int reverse = 0;

    //loop to reverse the integer
    while(number > 0)
    {
        int remainder = number % 10;
        reverse = (reverse * 10) + remainder;
        number /= 10;
    }

    return reverse;
}

bool isPrime(int number)//function to determine if a number is prime
{
    //loop to check for primeness
    for(int divisor = 2; divisor <= number / 2; divisor++)
    {
        if(number % divisor == 0)
        {
            //if true, number is not prime
            return false;//number is not a prime
        }
    }

    return true;//number is prime
}

bool isEmirp(int number)//function to determine if a number is emirp
{
    if(isPrime(number))
    {
        //if true, then reverse number
        int reverse = revInteger(number);

        //return true if it emirp
        if(number != reverse && isPrime(reverse))
            return true;
    }

    return false;
}

void printEmirpNumber(int numberOfEmirps)
{
   const int NUMBER_OF_EMIRPS = numberOfEmirps;
   const int NUMBER_OF_EMIRPS_PER_LINE = 10;
   int count = 0;//count the number of emirp numbers

   for(int n = 2; count < NUMBER_OF_EMIRPS; n++)
   {
       //print Emirp number and increase the count
       if(isEmirp(n))
       {
           count++;//increase the count

           if(count % NUMBER_OF_EMIRPS_PER_LINE == 0)
           {
               //print the number and advance to the new line
               cout << setw(6) << n << endl;
           }
           else
               cout << setw(6) << n;
       }
   }
}