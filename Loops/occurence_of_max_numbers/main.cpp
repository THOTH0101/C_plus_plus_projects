#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int max;
    int num;

    //prompt user to enter numbers and the input ends with 0
    cout << "Enter numbers: ";
    cin >> num;
    max = num;

    //keep reading until input is 0
    while (num != 0)
    {
        //conditional statement to determine the max number and it occurrence
        if(num > max)
        {
            max = num;
            count = 1;
        }
        else if(num == max)
            count++;

        //prompt user to enter input again
        cin >> num;
    }

    //display the result
    cout << "The largest number is " << max << endl;
    cout << "The occurrence count of the largest number is " << count << endl;

    return 0;
}