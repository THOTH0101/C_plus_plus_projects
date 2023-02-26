//
// Created by thoth on 2/26/23.
//

#ifndef GEOMETRY_N_SIDED_REGULAR_POLYGON_REGULARPOLYGON_H
#define GEOMETRY_N_SIDED_REGULAR_POLYGON_REGULARPOLYGON_H

class RegularPolygon
{
public:
    RegularPolygon();
    RegularPolygon(int N, double SIDE);
    RegularPolygon(int N, double SIDE, double X, double Y);
    int getN() const;
    double getSide() const;
    double getX() const;
    double getY() const;
    void setN(int N);
    void setSide(double SIDE);
    void setX(double X);
    void setY(double Y);
    double getPerimeter() const;
    double getArea() const;

private:
    int n; //number of sides in the polygon
    double side; //the length of side
    double x; //x-coordinate of the center of the polygon
    double y; //y-coordinate of the center of the polygon
};

#endif //GEOMETRY_N_SIDED_REGULAR_POLYGON_REGULARPOLYGON_H
