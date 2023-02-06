//
// Created by THOTH0101 on 2/4/23.
//

#ifndef GEOMETRY_INTERSECTION_LINEAREQUATION_H
#define GEOMETRY_INTERSECTION_LINEAREQUATION_H

class LinearEquation
{
public:
    double a;
    double a1;
    double b;
    double b1;
    double c;
    double c1;
    double determinant;
    LinearEquation(double X1, double Y1, double X2, double Y2, double X3, double Y3, double X4, double Y4);
    bool isSolvable();
    double getX();
    double getY();

private:
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
};

#endif //GEOMETRY_INTERSECTION_LINEAREQUATION_H
