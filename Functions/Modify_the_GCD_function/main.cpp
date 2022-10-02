#include <iostream>
using namespace std;

int lcm(int n1, int n2);//function prototype

int main()
{
    int n1, n2;//initialise two integer

    // Prompt the user to enter two integers
    cout << "Enter first integer: ";
    cin >> n1;
    cout << "Enter second integer: ";
    cin >> n2;

    //invoke function and print final result
    cout << "The least common multiple for " << n1 << " and " << n2 << " is " << lcm(n1, n2) << endl;
    
    return 0;
}

// Return the lcm of two integers
int lcm(int n1, int n2)
{
    int lcm = 1; // Initial lcm is 1
    int k;

    //choose the smaller integer and initialise as k
    if(n1 < n2)
        k = n1;
    else
        k = n2;

    // Possible lcm
    while (k > 1)
    {
        if (n1 % k == 0 && n2 % k == 0)
            lcm = k; // Update lcm
            k--;
    }

    return lcm; // Return lcm
}