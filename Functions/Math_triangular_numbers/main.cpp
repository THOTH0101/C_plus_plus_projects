#include <iostream>
#include <iomanip>
using namespace std;

int getTriangularNumber(int); //function prototype

int main()
{
    int n = 75;

    //title
    cout << "The first 75 Triangular numbers are:" << endl;

    //loop to compute and print the triangular numbers
    for(int m = 1; m <= n; m++)
    {
        if(m % 5 == 0)
            cout << setw(6) << getTriangularNumber(m) << endl;
        else
            cout << setw(6) << getTriangularNumber(m) << " ";
    }
    return 0;
}

//function to determine a triangular number
int getTriangularNumber(int n)
{
    n = (n * (n + 1))/ 2;
        return n;
}
