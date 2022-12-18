#include <iostream>
#include <cmath>
using namespace std;

double getDistance(double x1, double y1, double x2, double y2); //compute the distance between two points (x1, y1) and (x2, y2)


int main()
{
    const int NUMBER_OF_POINTS = 8;

    //each row in points represents a point
    double points[NUMBER_OF_POINTS][2];

    cout << "Enter " << NUMBER_OF_POINTS << " points: ";

    for(int i = 0; i < NUMBER_OF_POINTS; i++)
        cin >> points[i][0] >> points[i][1];

    //p1 and p2 are the indices in the points array
    int p1 = 0, p2 = 1; //initial two points

    double shortestDistance = getDistance(points[p1][0], points[p1][1], points[p2][0], points[p2][1]); //initialize shortestDistance

    //compute distance for every two points
    for (int i = 0; i < NUMBER_OF_POINTS; i++)
    {
        for (int j = i + 1; j < NUMBER_OF_POINTS; j++)
        {
            double distance = getDistance(points[i][0], points[i][1], points[j][0], points[j][1]); //find distance
            if (shortestDistance > distance)
            {
                p1 = i; //update p1
                p2 = j; //update p2
                shortestDistance = distance; //update shortestDistance
            }
        }
    }

    //display result
    for (int i = 0; i < NUMBER_OF_POINTS; i++)
    {
        for (int j = 0; j < NUMBER_OF_POINTS; j++)
        {
            if (getDistance(points[i][0], points[i][1], points[j][0], points[j][1]) == shortestDistance)
                cout << "The closest two points are " << "(" << points[i][0] << ", " << points[i][1] << ") and (" << points[j][0] << ", " << points[j][1] << ")" << endl;
        }
    }

    cout << "Their distance is " << shortestDistance << endl;

    return 0;
}

//function definition
double getDistance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}