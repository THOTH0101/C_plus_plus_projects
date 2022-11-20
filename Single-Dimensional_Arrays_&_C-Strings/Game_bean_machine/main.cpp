/*
 * (Game: bean machine) The bean machine, also known as a quincunx or the Galton box,
 * is a device for statistic experiments named after English scientist Sir Francis Galton.
 * It consists of an upright board with evenly spaced nails (or pegs) in a triangular form.
 * Balls are dropped from the opening of the board.
 * Every time a ball hits a nail, it has a 50% chance to fall to the left or to the right.
 * The piles of balls are accumulated in the slots at the bottom of the board.
 * Write a program that simulates the bean machine.
 * Your program should prompt the user to enter the number of the balls and
 * the number of the slots (maximum 50) in the machine.
 * Simulate the falling of each ball by printing its path.
 * (Hint: Create an array named slots. Each element in slots stores the number of balls in a slot.
 * Each ball falls into a slot via a path.
 * The number of R’s in a path is the position of the slot where the ball falls.
 * For example, for the path LRLRLRR, the ball falls into slots[4],
 * and for the path RRLLLLL, the ball falls into slots[2].)
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//function prototype
void makeEmptyArray(char array[], int arraySize); //function that initialize char array with empty space
void printArray(char array[], int arraySize); //function to print array
void ballFalling(char array[], int arraySize); //function to simulate falling of balls
int countR(const char array[], char ch, int arraySize); //function to count number of occurrence of character ch
int maxElement(const int array[], int arraySize); //function return maximum element in the array
void printHistogram(int array[], int arraySize); //function print the histogram of the array

int main()
{
    srand(time(0)); //initialize srand() for rand() function
    int ballsDrop;
    int numOfSlots;

    //user for data inputs
    cout << "Enter the number of balls to drop: ";
    cin >> ballsDrop;
    cout << "Enter the number of slots in the bean machine: ";
    cin >> numOfSlots;

    //create arrays
    char ballPath[numOfSlots];
    int slots[numOfSlots];

    for(int j = 0; j < numOfSlots; j++)
        slots[j] = 0;

    //invoke makeEmptyArray function
    makeEmptyArray(ballPath, numOfSlots);

    //loop to play game
    for(int i = 1; i <= ballsDrop; i++)
    {
        ballFalling(ballPath, numOfSlots); //invoke to drop ball

        printArray(ballPath, numOfSlots); //invoke to print fall simulation

        slots[countR(ballPath, 'R', numOfSlots) - 1]++;
    }

    cout << endl;

    printHistogram(slots, numOfSlots);

    return 0;
}

//function definition
void makeEmptyArray(char array[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        array[i] = ' ';
}

void printArray(char array[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        cout << array[i];

    cout << endl;
}

void ballFalling(char array[], int arraySize)
{
    for(int i = 0; i < arraySize - 1; i++)
    {
        int random = rand() % 2;

        //if random generate is 0 is left and 1 is right
        if(random == 0)
            array[i] = 'L';
        else
            array[i] = 'R';
    }
}

int countR(const char array[], char ch, int arraySize)
{
    int count = 0; //initialize count of R to 0

    for(int i = 0; i < arraySize; i++)
    {
        if(array[i] == ch)
            count++;
    }

    return count;
}

int maxElement(const int array[], int arraySize)
{
    int max = array[0];

    for(int i = 0; i < arraySize; i++)
    {
        if(max < array[i])
            max = array[i];
    }

    return max;
}

void printHistogram(int array[], int arraySize)
{
    int max = maxElement(array, arraySize);

    for(int i = max; i > 0; i--)
    {
        for(int j = 0; j < arraySize; j++)
        {
            if(array[j] >= i)
                cout << "O ";
            else
                cout << "  ";
        }
        cout << "\n";
    }

    for(int k = 0; k < arraySize; k++)
        cout << "--";

    cout << endl;

    for(int l = 1; l <= arraySize; l++)
        cout << l << " ";
}