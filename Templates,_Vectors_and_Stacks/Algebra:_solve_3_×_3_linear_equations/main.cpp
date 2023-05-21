/*
 * You can use the following computations to solve a 3 × 3 system of linear equation:
 *      a11x + a12y + a13z = b1
 *      a21x + a22y + a23z = b2
 *      a31x + a32y + a33z = b3
 *
 *      x = ((a22a33 - a23a32) b1 + (a13a32 - a12a33) b2 + (a12a23 - a13a22) b3) / | A |
 *
 *      y = ((a23a31 - a21a33) b1 + (a11a33 - a13a31) b2 + (a13a21 - a11a23) b3) / | A |
 *
 *      z = ((a21a32 - a22a31) b1 + (a12a31 - a11a32) b2 + (a11a22 - a12a21 ) b3) / | A |
 *
 *            |a11 a12 a13|
 *      | A | |a21 a22 a23| = a11a22a33 + a31a12a23 + a13a21a32 - a13a22a31 - a11a23a32 - a33a21a12.
 *            |a31 a32 a33|
 *
 * Write a program that prompts the user to enter a11, a12, a13, a21, a22, a23, a31, a32, a33, b1, b2,
 * and b3, and displays the result. If | A | is 0, report that “The equation has no solution.”
 *
 * */

#include <iostream>
#include <vector>
using namespace std;

void solveLinearAlgebra(vector<vector<double>> & matrix);

int main()
{
    vector<vector<double>> matrix(3);

    for(auto & i : matrix)
        i = vector<double>(4);

    //prompt for values
    cout << "Enter a11, a12, a13, a21, a22, a23, a31, a32, a33: ";
    for(auto & j : matrix)
        for(int k = 0; k < j.size() - 1; k++)
            cin >> j[k];

    cout << "Enter b1, b2, b3: ";
    for(auto & row: matrix)
        cin >> row[3];

    solveLinearAlgebra(matrix);

    return 0;
}

void solveLinearAlgebra(vector<vector<double>> & matrix)
{
    //compute | A | = a11a22a33 + a31a12a23 + a13a21a32 - a13a22a31 - a11a23a32 - a33a21a12
    double A = matrix[0][0]*matrix[1][1]*matrix[2][2] + matrix[2][0]*matrix[0][1]*matrix[1][2] +
               matrix[0][2]*matrix[1][0]*matrix[2][1] - matrix[0][2]*matrix[1][1]*matrix[2][0] -
               matrix[0][0]*matrix[1][2]*matrix[2][1] - matrix[2][2]*matrix[1][0]*matrix[0][1];

    //compute x = ((a22a33 - a23a32) b1 + (a13a32 - a12a33) b2 + (a12a23 - a13a22) b3) / | A |
    double x = ((matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])*matrix[0][3] +
            (matrix[0][2]*matrix[2][1] - matrix[0][1]*matrix[2][2])*matrix[1][3] +
            (matrix[0][1]*matrix[1][2] - matrix[0][2]*matrix[1][1])*matrix[2][3]) / A;

    //compute y = ((a23a31 - a21a33) b1 + (a11a33 - a13a31) b2 + (a13a21 - a11a23) b3) / | A |
    double y = ((matrix[1][2]*matrix[2][0] - matrix[1][0]*matrix[2][2])*matrix[0][3] +
            (matrix[0][0]*matrix[2][2] - matrix[0][2]*matrix[2][0])*matrix[1][3] +
            (matrix[0][2]*matrix[1][0] - matrix[0][0]*matrix[1][2])*matrix[2][3]) / A;

    //compute z = ((a21a32 - a22a31) b1 + (a12a31 - a11a32) b2 + (a11a22 - a12a21 ) b3) / | A |
    double z = ((matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0])*matrix[0][3] +
            (matrix[0][1]*matrix[2][0] - matrix[0][0]*matrix[2][1])*matrix[1][3] +
            (matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0])*matrix[2][3]) / A;

    if(A == 0)
        cout << "The equation has no solution" << endl;
    else
        cout << "The solution is " << x << " " << y << " " << z << endl;
}