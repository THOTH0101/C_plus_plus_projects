#include <iostream>
#include "MyPoint.h"
using namespace std;

int main()
{
    //create two point object
    MyPoint point1;
    MyPoint point2(10, 30.5);

    cout << "The distance between (" << point1.getX() << ", " << point1.getY() << ") and (" << point2.getX() << ", " <<
    point2.getY() << ") is " << point1.getDistance(point2.getX(), point2.getY()) << endl;

    return 0;
}
