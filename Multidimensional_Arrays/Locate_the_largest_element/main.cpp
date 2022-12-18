#include <iostream>
using namespace std;

void locateLargest(const double a[][4], int location[]); //function prototype

int main()
{
    double m[3][4];
    int location[2];

    cout << "Enter the array:" << endl;
    for(int i = 0; i < 3; i++)
        cin >> m[i][0] >> m[i][1] >> m[i][2] >> m[i][3];

    locateLargest(m, location);

    return 0;
}

//function definition
void locateLargest(const double a[][4], int location[])
{
    int i = 0, j = 0;
    double largestElement = a[i][j];
    location[0] = i;
    location[1] = j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(largestElement < a[i][j])
            {
                largestElement = a[i][j];
                location[0] = i;
                location[1] = j;
            }
        }
    }

    //display result
    cout << "The location of the largest element is at (" << location[0] << ", " << location[1] << ")" << endl;
}