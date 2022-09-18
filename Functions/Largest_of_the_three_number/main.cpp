#include <iostream>
using namespace std;

void displayLargest(double num1, double num2, double num3);//function prototype


int main()
{
    double num1, num2, num3;

    //prompt the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    //invoke the function and display results
    displayLargest(num1, num2, num3);

    return 0;
}

//function definition
void displayLargest(double num1, double num2, double num3)
{
    //check the largest among the three numbers
    if(num1 > num2 && num1 > num3)
        cout << "The largest of them is " << num1 << endl;
    else if(num2 > num1 && num2 > num3)
        cout << "The largest of them is " << num2 << endl;
    else
        cout << "The largest of them is " << num3 << endl;
}