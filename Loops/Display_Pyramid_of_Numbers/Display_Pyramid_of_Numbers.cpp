#include <iostream>
using namespace std;

int main()
{
    //prompt the user to a number from 1 to 15
    cout << "Enter the number of lines from 1 to 15: ";
    int numberOfLines;
    cin >> numberOfLines;
    cout << endl;
    for(int i = 1; i <= numberOfLines; i++)
    {
        for(int j = numberOfLines - i; j > 0; j--)
        {
            cout << "   ";

        }
        for(int k = i; k > 0; k--)
        {
            if(k < 10)
                cout << "  " << k;
            else
                cout << " " << k;
        }
        if(i != 1)
        {
            for(int x = 2; x <= i; x++)
            {
                if(x < 11)
                    cout << "  " << x;
                else
                    cout << " " << x;
            }
        }
        cout << endl;
    }
    return 0;
}