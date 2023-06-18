//
// Created by thoth on 6/16/23.
//

#include "ThreeDPoint.h"
#include <cmath>
using namespace std;

ThreeDPoint::ThreeDPoint():MyPoint()
{
    z = 0;
}

ThreeDPoint::ThreeDPoint(double x, double y, double z) : MyPoint(x, y)
{
    this->z = z;
}

double ThreeDPoint::getZ() const
{
    return z;
}

double ThreeDPoint::distance(MyPoint point) {
    return point.getDistance(ThreeDPoint::getY(), ThreeDPoint::getY());
}