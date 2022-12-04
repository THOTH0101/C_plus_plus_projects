#include <iostream>
#include <cstring>
using namespace std;

//function prototype
void swapCase(const char s1[], char s2[]);

int main()
{
    char s1[10000] = "";
    char s2[] = "";

    //prompt user to enter a string
    cout << "Enter a string: ";
    cin.getline(s1, 10000);

    swapCase(s1, s2);

    cout << "The swapCase is " << s2 << endl;

    return 0;
}

//function definition
void swapCase(const char s1[], char s2[])
{
    for(int i = 0; i < strlen(s1) + 1; i++)
    {
        if(isupper(s1[i]))
            s2[i] = static_cast<char>(tolower(s1[i]));
        else
            s2[i] = static_cast<char>(toupper(s1[i]));
    }
}