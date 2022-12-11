#include <iostream>
using namespace std;

void printSortArray(const int list[], int size); //function prototype

int main()
{
    int score[8][5] = {
            {12, 14, 13, 14, 15},
            { 17, 13, 14, 13, 13},
            {13, 13, 14, 13, 13},
            {19, 13, 14, 17, 13},
            {13, 15, 14, 13, 16},
            {13,14, 14, 16, 13},
            {13, 17, 14, 18, 13},
            {16, 13, 15, 19, 12}
    };

    int totalMark[8];

    //loop to initialize array to 0
    for(int & x : totalMark)
        x = 0;

    //loop to compute each student total score into a 1D totalMark
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 5; j++)
            totalMark[i] += score[i][j];

    //loop to sort the totalMark array into decreasing order
    printSortArray(totalMark, 8);

    return 0;
}

//function definition
void printSortArray(const int list[], int size)
{
    int index[size]; //create an array to store index
    int i, j, max;

    //loop assign student index to index array
    for(i = 0; i < size; i++)
        index[i] = i;

    for(i = 0; i < size - 1; i++)
    {
        max = i; //initialise max

        for(j = i + 1; j < size; j++)
        {
            if(list[index[max]] < list[index[j]])
                max = j;
        }

        //swap i with max if necessary
        if(max != i)
        {
            int temp = index[max];
            index[max] = index[i];
            index[i] = temp;
        }
    }

    //loop to print result
    for(i = 0; i < size; i++)
        cout << "Student " << index[i] << " scored " << list[index[i]] << " in five tests" <<endl;
}