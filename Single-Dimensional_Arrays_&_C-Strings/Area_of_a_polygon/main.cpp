#include <iostream>
using namespace std;

//function prototype
void createXY(const double list[], double x[], double y[], int size); //sort original coordinates into x and y
double polygonArea(const double x[], const double y[], int size); //find the area of convex polygon

int main()
{
    const int ARRAY_SIZE = 12;
    double points[ARRAY_SIZE];
    double X[6];
    double Y[6];

    //prompt user for coordinates
    cout << "Enter the coordinates of six points: ";

    for(int i = 0; i < ARRAY_SIZE; i++)
        cin >> points[i];

    createXY(points, X, Y, ARRAY_SIZE); //invoke to sort array into xy coordinate

    //print result
    cout << "The total area is ";
    cout << polygonArea(X, Y, 6) << endl;

    return 0;
}

//function definition
void createXY(const double list[], double x[], double y[], int size)
{
    int i, j;

    for(i = 0, j = 0; i < size; i+=2, j++)
        x[j] = list[i];

    for(i = 1, j = 0; i < size; i+=2, j++)
        y[j] = list[i];
}

double polygonArea(const double x[], const double y[], int size)
{
    double sum = 0;
    int j = size - 1;

    for(int i = 0; i < size; i++)
    {
        sum += (x[j] + x[i]) * (y[j] - y[i]);
        j = i;
    }

    return sum / 2;
}