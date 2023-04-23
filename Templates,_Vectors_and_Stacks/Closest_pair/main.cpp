#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//compute the distance between two points (x1, y1) and (x2, y2)
double getDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main()
{
    //prompt user for number of points
    cout << "Enter number of points: ";
    int numOfPoints;
    cin >> numOfPoints;

    vector<vector<double>> points(numOfPoints);
    for(auto & point : points)
        point = vector<double>(2);

    //prompt user for all point
    cout << "Enter 8 points: ";
    for(int i = 0; i < numOfPoints; i++)
        cin >> points[i][0] >> points[i][1];

    int p1 = 0, p2 = 1;

    //initialize shortestDistance
    double shortestDistance = getDistance(points[p1][0], points[p1][1], points[p2][0], points[p2][1]);

    //compute distance for every two points
    for(int i = 0; i < numOfPoints; i++)
    {
        for(int j = i + 1; j < numOfPoints; j++)
        {
            //find distance
            double distance = getDistance(points[i][0], points[i][1], points[j][0], points[j][1]);

            if(shortestDistance > distance)
            {
                p1 = i; //update p1
                p2 = j; //update p2
                shortestDistance = distance; //update shortDistance
            }
        }
    }

    //display result
    cout << "The closet two points are (" << points[p1][0] << ", " << points[p1][1] << ") and (" << points[p2][0]
    << ", " << points[p2][1] << ")" << endl;

    return 0;
}
