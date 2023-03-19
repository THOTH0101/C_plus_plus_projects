#include <iostream>
#include "Circle2D.h"
using namespace std;

int main()
{
    //create objects
    Circle2D c1(2, 2, 5.5);
    Circle2D c2(2, 2, 5.5);
    Circle2D c3(4, 5, 10.5);

    //test and displays results
    cout << "c1 has the area: " << c1.getArea() << " and perimeter: " << c1.getPerimeter() << endl;
    cout << "Is point(3, 3) inside c1: " << (c1.contains(3, 3) ? "true" : "false") << endl;
    cout << "Is c2 inside c1: " << (c1.contains(c2) ? "true" : "false") << endl;
    cout << "Are c1 and c3 overlaps: " << (c1.overlaps(c3) ? "true" : "false") << endl;

    return 0;
}
