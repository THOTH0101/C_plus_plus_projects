#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const int VALUE_TO_TERMINATE = 5;
    double ans;
    double number1, number2;
    int choice;

    //initialize seed
    srand(time(0));

    //main menu
    cout << "Main menu\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Exit\nEnter a choice: ";
    cin >> choice;

    //loop for controlling the program
    while(choice != VALUE_TO_TERMINATE)
    {
        //Generate random two single digits
        number1 = rand() % 10;
        number2 = rand() % 10;

        //1: Addition question
        if(choice == 1)
        {
            //prompt question
            cout << "What is " << number1 << " + " << number2 << "? ";
            cin >> ans;

            //check answer and evaluate
            if(ans == number1 + number2)
                cout << "Correct" << endl;
            else
                cout << "Your answer is wrong. The correct answer is " << number1 + number2 << endl;
        }

        //2: Subtraction questions
        else if(choice == 2)
        {
            //if number1 < number2, swap number1 with number2
            if(number1 < number2)
            {
                double temp = number1;
                number1 = number2;
                number2 = temp;
            }

            //prompt question
            cout << "What is " << number1 << " - " << number2 << "? ";
            cin >> ans;

            //check answer and evaluate
            if(ans == number1 - number2)
                cout << "Correct" << endl;
            else
                cout << "Your answer is wrong. The correct answer is " << number1 - number2 << endl;
        }

        //3: Multiplication question
        else if(choice == 3)
        {
            cout << "What is " << number1 << " * " << number2 << "? ";
            cin >> ans;

            //check answer and evaluate
            if(ans == number1 * number2)
                cout << "Correct" << endl;
            else
                cout << "Your answer is wrong. The correct answer is " << number1 * number2 << endl;
        }

        //4: Division question
        else if(choice == 4)
        {
            //make number2 is not zero
            while(number2 == 0)
                number2 = rand() % 10;

            //prompt question
            cout << "What is " << number1 << " / " << number2 << "? ";
            cin >> ans;

            //set solution to two decimal point
            double soln = floor((number1 / number2) * 100.0) / 100.0;

            //check answer and evaluate
            if(ans == soln)
                cout << "Correct" << endl;
            else
                cout << "Your answer is wrong. The correct answer is " << soln << endl;
        }

        //show error if input is invalid
        else
            cout << "Error! an valid input, Try again" << endl;

        cout << endl;//goto the next line

        //go back to main menu
        cout << "Main menu\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Exit\nEnter a choice: ";
        cin >> choice;

    }

    return 0;
}