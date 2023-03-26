//
// Created by thoth on 3/25/23.
//

#ifndef GEOMETRY_FIND_THE_BOUNDING_RECTANGLE_RECTANGLE2D_H
#define GEOMETRY_FIND_THE_BOUNDING_RECTANGLE_RECTANGLE2D_H

class Rectangle2D
{
public:
    Rectangle2D();
    Rectangle2D(double x,double y, double width,double height);
    double getX() const;
    double getY() const;
    double getWidth() const;
    double getHeight() const;
    void setX(double x);
    void setY(double y);
    void setWidth(double width);
    void setHeight(double height);
    double getArea() const;
    double getPerimeter() const;
    bool contains(double x, double y) const;
    bool contains(const Rectangle2D &r) const;
    bool overlaps(const Rectangle2D &r) const;

private:
    double x;
    double y;
    double width;
    double height;
};

#endif //GEOMETRY_FIND_THE_BOUNDING_RECTANGLE_RECTANGLE2D_H
