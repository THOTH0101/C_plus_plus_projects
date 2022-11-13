#include <iostream>
using namespace std;

int main()
{
    const int INTEGER_SIZE = 100;
    int integer[INTEGER_SIZE];
    int input = -1;

    for(int k = 0; k < INTEGER_SIZE; k++)
        integer[k] = 0;

    //prompt user to Enter the integers between 1 and 100
    cout << "Enter the integers between 1 and 100: ";

    //loop for collection of data, counting of occurrence
    for(int i = 0; input != 0; i++)
    {
        integer[input]++; //add 1 to the integer once input
        cin >> input;
    }

    //loop to display results
    for(int j = 0; j < INTEGER_SIZE; j++)
    {
        if(integer[j] > 0)
        {
            if(integer[j] > 1)
                cout << j << " occurs " << integer[j] << " times" << endl;
            else
                cout << j << " occurs " << integer[j] << " time" << endl;
        }
    }

    return 0;
}