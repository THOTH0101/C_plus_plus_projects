/*(Geometry: same line?) Programming Exercise 6.20 gives a function for testing
 * whether three points are on the same line. Write the following function to test
 * whether all the points in points array are on the same line.
 * */

#include <iostream>
#include <vector>
using namespace std;

//function prototype
bool sameLine(const vector<vector<double>>& points);
bool onSameLine(double x0, double y0, double x1, double y1, double x2, double y2);

int main()
{
    vector<vector<double>> points (5);
    for(unsigned i = 0; i < 5; i++)
        points[i] = vector<double> (2);

    //prompt for user input
    cout << "Enter five points: ";
    for(unsigned j = 0; j < 5; j++)
        cin >> points[j][0] >> points[j][1];

    //print result
    cout << "The five point are" << (sameLine(points) ? " " : " not ") << "on same line" << endl;

    return 0;
}

//implementation
bool sameLine(const vector<vector<double>>& points)
{
    for(unsigned i = 0; i < points.size() - 3; i++)
    {
        if(!onSameLine(points[i][0], points[i][1], points[i+1][0], points[i+1][1], points[i+2][0], points[i+2][1]))
            return false;
    }

    return true;
}

bool onSameLine(double x0, double y0, double x1, double y1, double x2, double y2)
{
    return (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0) == 0;
}