#include <iostream>
using namespace std;

int main()
{
    for(int i = 8; i > 0; i--)
    {
        for(int k = 8 - i; k > 0; k--)
            cout << "  ";
        for(int j = 0; j < i; j++)
        {
            char alpha = static_cast<char>('a' + j);
            cout << " " << alpha;
        }
        for(int l = i - 1 ; l >= 0; l--)
        {
            char alpha = static_cast<char>('a' + l);
            cout << " " << alpha;
        }
        cout << endl;
    }
    return 0;
}