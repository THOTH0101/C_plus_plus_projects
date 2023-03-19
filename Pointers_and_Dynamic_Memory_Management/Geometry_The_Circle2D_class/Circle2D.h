//
// Created by thoth on 3/19/23.
//

#ifndef GEOMETRY_THE_CIRCLE2D_CLASS_CIRCLE2D_H
#define GEOMETRY_THE_CIRCLE2D_CLASS_CIRCLE2D_H

class Circle2D
{
public:
    Circle2D();
    Circle2D(double x, double y, double radius);
    double getX() const;
    double getY() const;
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    bool contains(double x, double y) const;
    bool contains(const Circle2D& circle) const;
    bool overlaps(const Circle2D& circle) const;

private:
    double x;
    double y;
    double radius;
};

#endif //GEOMETRY_THE_CIRCLE2D_CLASS_CIRCLE2D_H
