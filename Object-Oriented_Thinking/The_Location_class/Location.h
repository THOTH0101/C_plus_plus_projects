//
// Created by thoth on 3/5/23.
//

#ifndef THE_LOCATION_CLASS_LOCATION_H
#define THE_LOCATION_CLASS_LOCATION_H

const int ROW_SIZE = 3;
const int COLUMN_SIZE = 4;

class Location
{
public:
    int row;
    int column;
    double maxValue;
    Location(const double a[][COLUMN_SIZE]);
};

#endif //THE_LOCATION_CLASS_LOCATION_H
