#include <iostream>
#include <cstring>
using namespace std;

int isPalindrome(const char s[]); //function prototype

int main()
{
    char s[] = "";

    //prompt user to enter c-string
    cout << "Enter a C-string: ";
    cin >> s;

    cout << "The length is " << isPalindrome(s) << endl;

    return 0;
}

//function definition
int isPalindrome(const char s[])
{
    int size = strlen(s);
    for(int i = 0; i <= size/2; i++)
    {
        if(s[i] != s[size - i - 1])
            return -1;
    }

    return size;
}