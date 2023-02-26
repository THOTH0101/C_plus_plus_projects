#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main()
{
    //create a regular polygon objects
    RegularPolygon polygon1;
    RegularPolygon polygon2(6, 4);
    RegularPolygon polygon3(10, 4, 5.6, 7.8);

    //display their perimeter and area
    cout << "Polygon1 perimeter: " << polygon1.getPerimeter() << "\n\t\t area: " << polygon1.getArea() << endl;
    cout << "Polygon2 perimeter: " << polygon2.getPerimeter() << "\n\t\t area: " << polygon2.getArea() << endl;
    cout << "Polygon3 perimeter: " << polygon3.getPerimeter() << "\n\t\t area: " << polygon3.getArea() << endl;

    return 0;
}
