#include <iostream>
#include <cmath>
using namespace std;

//function prototype
double mean(const double x[], int size); //compute the mean of an array of double values
double deviation(const double x[], int size); //compute the deviation of double values

int main()
{
    const int SIZE_OF_X = 10;
    double x[SIZE_OF_X];

    //prompt user to enter ten numbers
    cout << "Enter ten numbers: ";

    for(int i = 0; i < SIZE_OF_X; i++)
    {
        cin >> x[i];
    }

    double xMean = mean(x, SIZE_OF_X); //invoke the mean function

    double xDeviation = deviation(x, SIZE_OF_X); //invoke the deviation function

    //print final result
    cout << "The mean is " << xMean << endl;
    cout << "The standard deviation is " << xDeviation << endl;

    return 0;
}

//function definition
double mean(const double x[], int size)
{
    double sum = 0;
    int n = 0;

    //loop to compute summation
    while(n < size)
    {
        sum += x[n];
        n++;
    }

    return sum / n;
}

double deviation(const double x[], int size)
{
    double sum = 0;
    int n = 0;

    double xMean = mean(x, size);

    //loop to compute summation
    while(n < size)
    {
        sum += pow((x[n] - xMean ) ,2);
        n++;
    }

    return sqrt(sum / (n - 1));
}