/*
 * Write a function that returns the intersection of two vectors using the following header:
 *
 *      template<typename T>
 *      vector<T> intersect(const vector<T>& v1, const vector<T>& v2)
 *
 * The intersection of two vectors contains the common elements that appear in both vectors. For example, the
 * intersection of two vectors {2, 3, 1, 5} and {3, 4, 5} is {3, 5}. Write a test program that prompts the user
 * to enter two vectors, each with five strings, and displays their intersection.
 *
 * */
#include <iostream>
#include <vector>
using namespace std;

//function prototype
template<typename T>
vector<T> intersect(const vector<T>& v1, const vector<T>& v2);

int main()
{
    //prompt user to enter the following input
    cout << "Enter five strings for vector1:" << endl;
    vector<string> str1(5);
    for(auto & i: str1)
        cin >> i;

    cout << "Enter five strings for vector2:" << endl;
    vector<string> str2(5);
    for(auto & j: str2)
        cin >> j;

    vector<string> common = intersect(str1, str2);

    //display the result
    cout << "The common strings are ";
    for(auto & k: common)
        cout << k << " ";

    return 0;
}

//function implementation
template<typename T>
vector<T> intersect(const vector<T>& v1, const vector<T>& v2)
{
    vector<T> intersect;

    //find common element
    for(int i = 0; i < v1.size(); i++)
    {
        for(int j = 0; j < v2.size(); j++)
        {
            if(v1[i] == v2[j])
                intersect.push_back(v2[j]); //store in intersect vector
        }
    }

    return intersect;
}