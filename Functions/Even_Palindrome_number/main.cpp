#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
bool isPalindrome(int number);
void printEvenPalindrome(int numberOfPalindrome);

int main()
{
    //print title
    cout << "The first 50 even palindrome numbers are: " << endl;

    //invoke the print function
    printEvenPalindrome(50);

    return 0;
}

//function definition
bool isPalindrome(int number)
{
    int reverse = 0;

    //loop to reverse integer
    for(int i = number; i > 0; i /= 10)
    {
        int remainder = i % 10;
        reverse = (reverse * 10) + remainder;
    }

    if(number == reverse)
        return true;
    else
        return false;
}

void printEvenPalindrome(int numberOfPalindrome)
{
    const int NUMBER_OF_PALINDROME = numberOfPalindrome;
    const int NUMBERS_PER_LINE = 5;
    int count = 0;
    int number = 2;

    //loop to print even palindrome
    while(count < NUMBER_OF_PALINDROME)
    {
        //print even palindrome 5 number per line
        if(isPalindrome(number))
        {
            count++;//increase count

            if(count % NUMBERS_PER_LINE == 0)
                cout << setw(6) << number << endl;
            else
                cout << setw(6) << number;
        }

        //check if the next even number is palindrome
        number+=2;
    }
}