//
// Created by thoth on 6/16/23.
//

#ifndef EXTEND_MYPOINT_MYPOINT_H
#define EXTEND_MYPOINT_MYPOINT_H

class MyPoint
{
private:
    double x;
    double y;

protected:
    MyPoint();
    MyPoint(double X, double Y);

public:
    double getX();
    double getY();
    double getDistance(double X, double Y);
};

#endif //EXTEND_MYPOINT_MYPOINT_H