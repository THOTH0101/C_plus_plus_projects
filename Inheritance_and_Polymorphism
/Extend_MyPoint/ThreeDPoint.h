//
// Created by thoth on 6/16/23.
//

#ifndef EXTEND_MYPOINT_THREEDPOINT_H
#define EXTEND_MYPOINT_THREEDPOINT_H

#include "MyPoint.h"
class ThreeDPoint: public MyPoint
{
public:
    ThreeDPoint();
    ThreeDPoint(double x, double y, double z);
    double getZ() const;
    double distance(MyPoint point);

private:
    double z;
};

#endif //EXTEND_MYPOINT_THREEDPOINT_H