//
// Created by thoth on 6/14/23.
//

#ifndef THE_TRIANGLE_CLASS_GEOMETRICOBJECT_H
#define THE_TRIANGLE_CLASS_GEOMETRICOBJECT_H

#include <string>
using namespace std;
class GeometricObject
{
protected:
    GeometricObject();
    GeometricObject(const string& color, bool filled);
public:
    string getColor() const;
    void setColor(const string& color);
    bool isFilled() const;
    void setFilled(bool filled);
    string toString() const;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
private:
    string color;
    bool filled;
}; // Must place semicolon here

#endif //THE_TRIANGLE_CLASS_GEOMETRICOBJECT_H