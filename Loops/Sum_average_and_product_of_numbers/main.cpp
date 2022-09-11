#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input;

    //open a file
    input.open("numbers.txt");

    //create input variables
    int score1, score2, score3;

    //read data
    input >> score1;
    input >> score2;
    input >> score3;

    //compute the sum, average, and the product
    int sum = score1 + score2 + score3;
    double average = (score1 + score2 + score3) / 3.0;
    int product = score1 * score2 * score3;

    //display the final result
    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;
    cout << "The product is " << product << endl;

    //close file
    input.close();

    cout << "Done" << endl;

    return 0;
}
