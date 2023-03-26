#include <iostream>
#include <algorithm>
#include <cmath>
#include "Rectangle2D.h"
using namespace std;

//function prototype
const int SIZE = 2;
Rectangle2D getRectangle(const double points[][SIZE]);
double* maxMin(const double* points, int size);

int main()
{
    //create a 2d array for points
    double points[5][SIZE];

    //prompt user for input
    cout << "Enter five points: ";
    for(auto & point : points)
        cin >> point[0] >> point[1];

    Rectangle2D r = getRectangle(points);

    cout << "The bounding rectangle's center (" << r.getX() << ", " << r.getY() << "), width " << r.getWidth()
    << ", height " << r.getHeight() << endl;

    return 0;
}

//function implementation
Rectangle2D getRectangle(const double points[][SIZE])
{
    double y[5], x[5];

    //extract y coordinates
    for(int i = 0; i < 5; i++)
        y[i] = points[i][1];

    //extract x coordinates
    for(int j = 0; j < 5; j++)
        x[j] = points[j][0];

    double* yMaxMin = maxMin(y, 5);
    double* xMaxMin = maxMin(x, 5);

    double Y = (yMaxMin[0] + yMaxMin[1]) / 2;
    double X = (xMaxMin[0] + xMaxMin[1]) / 2;
    double height = sqrt(pow(yMaxMin[0] - yMaxMin[1], 2));
    double width = sqrt(pow(xMaxMin[0] - xMaxMin[1], 2));

    return {X, Y, width, height};
}

double* maxMin(const double* points, int size)
{
    auto* maxMin = new double[2];

    maxMin[0] = maxMin[1] = points[0];

    for(int i = 0; i < size; i++)
    {
        if(points[i] > maxMin[0])
            maxMin[0] = points[i];

        if(points[i] < maxMin[1])
            maxMin[1] = points[i];
    }

    return maxMin;
}