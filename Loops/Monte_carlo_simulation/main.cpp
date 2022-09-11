#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int NUMBER_OF_TRIALS = 1000000;
    int count = 0;
    double y1;

    //initialize the random seed
    srand(time(0));

    //monte carlo loop algorithm
    for(int i = 0; i < NUMBER_OF_TRIALS; i++)
    {
        double x = rand() * 2.0 / RAND_MAX - 1;
        double y = rand() * 2.0 / RAND_MAX - 1;

        //randomly generate (x, y) to simulate hit points
        if(x < 0)
            count++;//the first odd region
        else if(x < 1 && x > 0 && y < 1 && y > 0)
        {
            double slope = -1;
            y1 = x * slope + y;//the second odd region
        }
    }

    //calculate the hits in the odd region
    double hitsInOdds = count + y1;

    //the probability for a dart to fall into an odd-numbered region
    double probForOddHits = hitsInOdds / NUMBER_OF_TRIALS;

    //print final result
    cout << "the probability for a dart to fall into an odd-numbered region is " << probForOddHits << endl;

    return 0;
}