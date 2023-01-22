//
// Created by THOTH on 1/17/23.
//

#ifndef THE_MYPOINT_CLASS_MYPOINT_H
#define THE_MYPOINT_CLASS_MYPOINT_H

class MyPoint
{
public:
    double x;
    double y;
    MyPoint();
    MyPoint(double X, double Y);
    double getX();
    double getY();
    double getDistance(double X, double Y);
};

#endif //THE_MYPOINT_CLASS_MYPOINT_H
