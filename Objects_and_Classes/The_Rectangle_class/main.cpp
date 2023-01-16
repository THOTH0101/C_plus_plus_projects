#include <iostream>
using namespace std;

class  Rectangle
        {
public:
    double width;
    double height;

    //construct a default rectangle object(no-arg constructor)
    Rectangle()
    {
        width = 1;
        height = 1;
    }

    //construct a Rectangle object
    Rectangle(double newWidth, double newHeight)
    {
        width = newHeight;
        height = newHeight;
    }

    //return the area of this Rectangle
    double getArea()
    {
        return width * height;
    }

    //return the perimeter of this Rectangle
    double getPerimeter()
    {
        return (2 * width) + (2 * height);
    }
        };

int main()
{
    //create Rectangle object
    Rectangle rectangle1(4, 40);
    Rectangle rectangle2(3.5, 35.9);

    //display their properties, area and perimeter
    cout << "the area of the rectangle of width " << rectangle1.width << " and the height "
    << rectangle1.height << " is " << rectangle1.getArea() << endl;
    cout << "the perimeter of the rectangle of width " << rectangle1.width << " and the height "
    << rectangle1.height << " is " << rectangle1.getPerimeter() << endl;
    cout << "the area of the rectangle of width " << rectangle2.width << " and the height "
    << rectangle2.height << " is " << rectangle2.getArea() << endl;
    cout << "the perimeter of the rectangle of width " << rectangle2.width << " and the height "
    << rectangle2.height << " is " << rectangle2.getPerimeter() << endl;

    return 0;
}