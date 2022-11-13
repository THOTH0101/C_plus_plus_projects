#include <iostream>
using namespace std;

//function prototype
int max(const int scores[], int size);
char grades(int scores, int best);

int main()
{
    //prompt user for number of student
    cout << "Enter the number of student: ";
    int numberOfStudent;
    cin >> numberOfStudent;

    const int ARRAY_SIZE = numberOfStudent; //convert numberOfStudent into const
    int scores[ARRAY_SIZE]; //initialise array

    //prompt user for scores
    cout << "Enter " << numberOfStudent << " scores: ";

    //loop for array data collection
    for(int i = 0; i < ARRAY_SIZE; i++)
        cin >> scores[i];

    //invoke max function
    int best = max(scores, ARRAY_SIZE); //initialise best

    //loop for printing result
    for(int j = 0; j < numberOfStudent; j++)
    {
        cout << "Student " << j << " score is " << scores[j];
        cout << " and grade is " << grades(scores[j], best) << endl;
    }

    return 0; //terminate program
}

//function definition
int max(const int scores[], int size) //function to determine the max score
{
    int max = scores[0]; //first score in the array

    //loop to determine the max score
    for(int i = 0; i < size; i++)
    {
        if(scores[i] > max) //if score is greater than max, then score equals max
            max = scores[i];
    }

    return max;
}

char grades(int scores, int best) //function to assign grades
{
    //assign grades base on scores
    if(scores >= (best - 10))
        return 'A';
    else if(scores >= (best - 20) && scores < (best - 10))
        return 'B';
    else if(scores >= (best - 30) && scores < (best - 20))
        return 'C';
    else if(scores >= (best - 40) && scores < (best - 30))
        return 'D';
    else
        return 'f';
}