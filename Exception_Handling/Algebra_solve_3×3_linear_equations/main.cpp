/*
 * Programming Exercise 12.24 solves a 3 × 3 system of linear equation. Write the following function to solve
 * the equation.
 *
 *      vector<double> solveLinearEquation(vector<vector<double>> a, vector<double> b)
 *
 * The parameter a stores {{a 11, a12, a13}, {a21, a22, a23}, {a31, a32, a33}}and b stores {b1, b2, b3}.
 * The solution for {x, y, z} is returned in a vector of three elements. The function throws a runtime_error
 * if | A | is 0 and an invalid_argument if the size of a, a[0], a[1], a[2], and b is not 3. Write a program
 * that prompts the user to enter a11, a12, a13, a21, a22, a23, a31, a32, a33, b1, b2, and b 3, and displays
 * the result. If | A | is 0, report that “The equation has no solution”. The sample runs are the same as in
 * Programming Exercise 12.24.
 *
 * */
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

//function prototype
vector<double> solveLinearEquation(vector<vector<double>>& a, vector<double>& b);

int main()
{
    vector<vector<double>> a(3);
    for(auto & row: a)
        row = vector<double>(3);

    //prompt user for all a
    cout << "Enter a11, a12, a13, a21, a22, a23, a31, a32, a33: ";
    for(auto & row: a)
        for(double & col: row)
            cin >> col;

    vector<double> b(3);
    //prompt user for all b
    cout << "Enter b1, b2, b3: ";
    for(auto & i: b)
        cin >> i;

    try
    {
        vector<double> solution = solveLinearEquation(a, b);

        //display result
        cout << "The solution is";
        for(auto & i: solution)
            cout << " " << i;
    }
    catch(exception& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}

//function implementation
vector<double> solveLinearEquation(vector<vector<double>>& a, vector<double>& b)
{
    //throw an invalid_argument if the size of a, a[0], a[1], a[2], and b is not 3
    if(a.size() != 3 && a[0].size() != 3 && a[1].size() != 3 && a[2].size() != 3 && b.size() != 3)
        throw invalid_argument("Linear equation is not 3 x 3");

    vector<double> solved; //to store x, y, and z

    //compute | A | = a11a22a33 + a31a12a23 + a13a21a32 - a13a22a31 - a11a23a32 - a33a21a12
    double A = a[0][0]*a[1][1]*a[2][2] + a[2][0]*a[0][1]*a[1][2] + a[0][2]*a[1][0]*a[2][1] -
            a[0][2]*a[1][1]*a[2][0] - a[0][0]*a[1][2]*a[2][1] - a[2][2]*a[1][0]*a[0][1];

    //throw a run_time error if A is 0
    if(A == 0)
        throw runtime_error("The equation has no solution");

    //compute x = ((a22a33 - a23a32) b1 + (a13a32 - a12a33) b2 + (a12a23 - a13a22) b3) / | A |
    double x = ((a[1][1]*a[2][2] - a[1][2]*a[2][1])*b[0] + (a[0][2]*a[2][1] - a[0][1]*a[2][2])*b[1] +
            (a[0][1]*a[1][2] - a[0][2]*a[1][1])*b[2]) / A;
    solved.push_back(x); //store result

    //compute y = ((a23a31 - a21a33) b1 + (a11a33 - a13a31) b2 + (a13a21 - a11a23) b3) / | A |
    double y = ((a[1][2]*a[2][0] - a[1][0]*a[2][2])*b[0] + (a[0][0]*a[2][2] - a[0][2]*a[2][0])*b[1] +
            (a[0][2]*a[1][0] - a[0][0]*a[1][2])*b[2]) / A;
    solved.push_back(y);

    //compute z = ((a21a32 - a22a31) b1 + (a12a31 - a11a32) b2 + (a11a22 - a12a21 ) b3) / | A |
    double z = ((a[1][0]*a[2][1] - a[1][1]*a[2][0])*b[0] + (a[0][1]*a[2][0] - a[0][0]*a[2][1])*b[1] +
            (a[0][0]*a[1][1] - a[0][1]*a[1][0])*b[2]) / A;
    solved.push_back(z);

    return solved; //return solution for x, y, and z
}