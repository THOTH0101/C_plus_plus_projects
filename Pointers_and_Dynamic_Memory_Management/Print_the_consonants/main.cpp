#include <iostream>
using namespace std;

int main()
{
    //prompt user for array size
    cout << "Enter the array size: ";
    int size;
    cin >> size;

    char* consonant = new char[size];
    int count = 0;

    //prompt user to enter character
    cout << "Enter characters: ";
    for(int i = 0; i < size; i++)
    {
        char temp;
        cin >> temp;

        if(temp != 'a' && temp != 'e' && temp != 'i' && temp != 'o' && temp != 'u' && temp != 'A' && temp != 'E'
        && temp != 'I' && temp != 'O' && temp != 'U')
        {
            consonant[count] = temp;
            count++;
        }
    }

    //display array
    for(int j = 0; j < count; j++)
        cout << consonant[j] << " ";

    return 0;
}
