/*
 *  Write a program that prompts the user to enter an integer m and find the smallest integer n such that
 *  m * n is a perfect square.(Hint: Store all smallest factors of m into a vector. n is the product of the factors
 *  that appear an odd number of times in the vector. For example, consider m = 90, store the factors 2, 3, 3, 5 in a
 *  vector. 2 and 5 appear an odd number of times in the vector. So, n is 10.)
 *
 * */
#include <iostream>
#include <vector>
using namespace std;

//function prototype
vector<int> factors(int number);
vector<vector<int>> nFactors(int number);
int perfectSquare(int number);
bool isPrime(int number);

int main()
{
    //prompt user to enter m
    cout << "Enter an integer m: ";
    int m;
    cin >> m;

    int n = perfectSquare(m);

    cout << "The smallest number n for m * n to be a perfect square is " << n << endl;
    cout << "m * n is " << m * n << endl;

    return 0;
}

//function implementation
vector<int> factors(int number)
{
    vector<int> factors;

    for(int divisor = 2; divisor < number / 2; divisor++)
    {
        if(number % divisor == 0 && isPrime(divisor))
            factors.push_back(divisor);
    }
    return factors;
}

vector<vector<int>> nFactors(int number)
{
    vector<int>m = factors(number); //extract factors

    //create 2D vector to store factors and occurrence
    vector<vector<int>> nFactors(m.size());
    for(auto & row: nFactors)
        row = vector<int>(2);

    for(int i = 0; i < m.size(); i++)
    {
        nFactors[i][0] = m[i];
        nFactors[i][1] = 0;
    }

    int row = 0;
    int divisor = nFactors[row][0];

    while(number > 1)
    {
        //check for divisibility
        if(number % divisor == 0)
        {
            number /= divisor;
            nFactors[row][1]++; //increase occurrence
        }
        else
        {
            //move to the next factor and try
            row++;
            divisor = nFactors[row][0];
        }
    }
    return nFactors;
}

int perfectSquare(int number)
{
    vector<vector<int>> f = nFactors(number); //extract factor and their occurrences
    int perfectSquare = 1;

    //find the odd occurrence to form perfect square
    for(auto & row: f)
        if(row[1] % 2 == 1)
            perfectSquare *= row[0];

    return perfectSquare;
}

bool isPrime(int number)
{
    for(int divisor = 2; divisor < number / 2; divisor++)
    {
        if(number % divisor == 0)
            return false;
    }
    return true;
}