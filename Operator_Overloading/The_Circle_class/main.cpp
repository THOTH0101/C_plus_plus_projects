/*
 *  Implement the relational operators (<, <=, ==, !=, >, >=) in the Circle class in Listing 10.9,
 *  CircleWithConstantMemberFunctions.h, to order the Circle objects according to their radii.
 *
 * */
#include <iostream>
#include "CircleWithContactMemberFunctions.h"
using namespace std;

int main()
{
    //create three circle object
    Circle c1(5.8);
    Circle c2(4.1);

    //make comparison
    cout << "c2 < c1 is " << (c2 < c1 ? "true" : "false") << endl;
    cout << "c1 <= c2 is " << (c1 <= c2 ? "true" : "false") << endl;

    //change c2 value
    c2.setRadius(5.8);
    cout << "c1 == c2 is " << (c1 == c2 ? "true" : "false") << endl;
    cout << "c1 != c2 is " << (c1 != c2 ? "true" : "false") << endl;
    cout << "c1 > c2 is " << (c1 > c2 ? "true" : "false") << endl;
    cout << "c1 >= c2 is " << (c1 >= c2 ? "true" : "false") << endl;

    return 0;
}
