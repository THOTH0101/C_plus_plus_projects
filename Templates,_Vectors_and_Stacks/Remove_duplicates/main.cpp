/*
 * Write a function that removes the duplicate elements from a vector using the following header:
 *
 *      template<typename T>
 *      void removeDuplicate(vector<T>& v)
 *
 * Write a test program that prompts the user to enter 10 integers to a vector and displays the distinct integers.
 *
 * */
#include <iostream>
#include <vector>
using namespace std;

//function prototype
template<typename T>
void removeDuplicate(vector<T>& v);

int main()
{
    //prompts the user to enter 10 integers
    cout << "Enter ten integers: ";
    vector<int> integer(10);
    for(auto & i: integer)
        cin >> i;

    removeDuplicate(integer);

    //displays the distinct integers
    cout << "The distinct integers are ";
    for(auto & i: integer)
        cout << i << " ";

    return 0;
}

//function implementation
template<typename T>
void removeDuplicate(vector<T>& v)
{
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i + 1; j < v.size(); j++)
        {
            if(v[i] == v[j])
            {
                vector<int>::iterator it;
                it = v.begin() + j;
                v.erase(it);
            }
        }
    }
}