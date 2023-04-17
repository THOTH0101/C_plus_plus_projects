#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;

int main()
{
    Vector<int> intVector;

    //Store numbers 1, 2, 3, 4, 5, ..., 10 to the vector
    for (int i = 0; i < 10; i++)
        intVector.push_back(i + 1);

    intVector.pop_back();

    //Display the numbers in the vector
    cout << "Numbers in the vector: ";
    for (int i = 0; i < intVector.size(); i++)
        cout << intVector.at(i) << " ";

    Vector<string> stringVector(1);

    //Store strings into the vector
    stringVector.push_back("Dallas");
    stringVector.push_back("Houston");
    stringVector.push_back("Austin");
    stringVector.push_back("Norman");

    //Display the string in the vector
    cout << "\nStrings in the string vector: ";
    for (int i = 0; i < stringVector.size(); i++)
        cout << stringVector.at(i) << " ";

    stringVector.pop_back(); //Remove the last element

    Vector<string> v2(1,"Atlanta");
    stringVector.swap(v2);

    //Redisplay the string in the vector
    cout << "\nStrings in the vector v2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2.at(i) << " ";

    v2.clear();
    cout << "\nIs vector v2 empty: " << (v2.empty() ? "True" : "False") << endl;

    return 0;
}