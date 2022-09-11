#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int NUMBER_OF_DATA = 10;
    double data;
    int count = 1;

    //prompt user for data input
    cout << "Enter ten numbers: ";
    cin >> data;

    //initialize summations
    double sum = data;
    double sum2 = pow(data, 2);

    //prompt user input and compute summation
    while (count < NUMBER_OF_DATA)
    {
        cin >> data;
        sum += data;
        sum2 += pow(data, 2);
        count++;
    }

    //compute mean for the data
    double mean = sum / NUMBER_OF_DATA;

    //compute standard deviation
    double stanDev = sqrt((sum2 - ((sum * sum) / NUMBER_OF_DATA)) / (NUMBER_OF_DATA - 1));

    //display the final result
    cout << "The mean is " << mean << endl;
    cout << "The standard deviation is " << stanDev << endl;

    return 0;
}