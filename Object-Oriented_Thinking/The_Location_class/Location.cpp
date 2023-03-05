//
// Created by thoth on 3/5/23.
//

#include "Location.h"

Location::Location(const double (*a)[4])
{
    int i = 0, j = 0;
    maxValue = a[i][j];
    row = i;
    column = j;

    for(i = 0; i < ROW_SIZE; i++)
    {
        for(j = 0; j < COLUMN_SIZE; j++)
        {
            if(maxValue < a[i][j])
            {
                maxValue = a[i][j];
                row = i;
                column = j;
            }
        }
    }
}