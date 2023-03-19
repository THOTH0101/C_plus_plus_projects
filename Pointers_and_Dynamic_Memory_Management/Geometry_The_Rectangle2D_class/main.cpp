#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main()
{
    //create objects
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);

    //test class and display result
    cout << "r1 has area: " << r1.getArea() << " and perimeter: " << r1.getPerimeter() << endl;
    cout << "Is point(3, 3) contains in r1: " << (r1.contains(3, 3) ? "true" : "false") << endl;
    cout << "Can r1 contains r2: " << (r1.contains(r2) ? "true" : "false") << endl;
    cout << "Are r1 and r3 overlaps: " << (r1.overlaps(r3) ? "true" : "false") << endl;

    return 0;
}
