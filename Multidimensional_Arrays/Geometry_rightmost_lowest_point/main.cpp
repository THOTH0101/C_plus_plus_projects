#include <iostream>
using namespace std;

const int SIZE = 2;
void getRightmostLowestPoint(const double points[][SIZE], int numberOfPoints, double rightMostPoint[]);

int main()
{
    int numberOfPoints = 6;
    double points[numberOfPoints][SIZE];
    double rightMostPoint[SIZE];

    cout << "Enter 6 points: ";

    //data collection
    for(int i = 0; i < numberOfPoints; i++)
        cin >> points[i][0] >> points[i][1];

    getRightmostLowestPoint(points, numberOfPoints, rightMostPoint);

    return 0;
}

void getRightmostLowestPoint(const double points[][SIZE], int numberOfPoints, double rightMostPoint[])
{
    //initialise the rightMost points
    rightMostPoint[0] = points[0][0];
    rightMostPoint[1] = points[0][1];

    for(int i = 1; i < numberOfPoints; i++)
    {
        if(points[i][1] < rightMostPoint[1])
            rightMostPoint[1] = points[i][1];
        else if(points[i][1] == rightMostPoint[1] && points[i][0] > rightMostPoint[0])
            rightMostPoint[0] = points[i][0];
    }

    cout << "The rightmost lowest point is (" << rightMostPoint[0] << ", " << rightMostPoint[1] << ")" << endl;
}