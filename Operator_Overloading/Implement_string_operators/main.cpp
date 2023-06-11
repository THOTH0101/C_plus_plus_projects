/*
 * The string class in the C++ standard library supports the overloaded operators, as shown in Table 10.1.
 * Implement the following operators: >>, ==, !=, >, >= in the MyString class in Programming Exercise 11.15.
 *
 * The string class in the C++ standard library supports the overloaded operators, as shown in Table 10.1.
 * Implement the following operators: [], +, and += in the MyString class in Programming Exercise 11.14.
 *
 * */
#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    //test MyString class
    MyString s1("Welcome");
    s1.append(" to C++"); // Appends " to C++" to s1
    cout << s1 << endl; // s1 now becomes Welcome to C++
    MyString s2("Welcome");
    s2.append(" to C and C++", 0, 5); // Appends " to C" to s2
    cout << s2 << endl; // s2 now becomes Welcome to C
    MyString s3("Welcome");
    s3.append(" to C and C++", 0, 5); // Appends " to C" to s3
    cout << s3 << endl; // s3 now becomes Welcome to C
    MyString s4("Welcome");
    s4.append(4, 'G'); // Appends "GGGG" to s4
    cout << s4 << endl; // s4 now becomes WelcomeGGGG
    MyString s5("Welcome");
    s5.assign("Dallas"); // Assigns "Dallas" to s1
    cout << s5 << endl; // s1 now becomes Dallas
    MyString s6("Welcome");
    s6.assign("Dallas, Texas", 0, 5); // Assigns "Dalla" to s2
    cout << s6 << endl; // s2 now becomes Dalla
    MyString s7("Welcome");
    s7.assign("Dallas, Texas", 5); // Assigns "Dalla" to s3
    cout << s7 << endl; // s3 now becomes Dalla
    MyString s8("Welcome");
    s8.assign(4, 'G'); // Assigns "GGGG" to s4
    cout << s8 << endl; // s4 now becomes GGGG
    MyString s9("Welcome");
    cout << s9.at(3) << endl; // s1.at(3) returns c
    cout << s9.erase(2, 3) << endl; // s1 is now Weme
    s9.clear(); // s1 is now empty
    cout << s9.empty() << endl; // s1.empty returns 1 (means true)
    MyString s10("Welcome");
    MyString s11("Welcomg");
    cout << s10.compare(s11) << endl; // Returns –1
    cout << s11.compare(s10) << endl; // Returns 1
    cout << s10.compare("Welcome") << endl; // Returns 0
    MyString s12("Welcome");
    cout << s12.substr(0, 1) << endl; // Returns W
    cout << s12.substr(3) << endl; // Returns come
    cout << s12.substr(3, 3) << endl; // Returns com
    MyString s13("Welcome to HTML");
    cout << s13.find("co", 6) << endl; // Returns string::npos
    cout << s13.find('o') << endl; // Returns 4
    cout << s13.find('o', 6) << endl; // Returns 9
    MyString s14 = "ABC"; // The = operator
    MyString s15 = s14; // The = operator
    for(int i = s15.length() - 1; i >= 0; i--)
        cout << s15[i]; // The [] operator
    cout << endl;

    MyString s16 = s14 + "DEFG"; // The + operator
    cout << s16 << endl; // s3 becomes ABCDEFG
    s14 += "ABC";
    cout << s14 << endl; // s1 becomes ABCABC
    s14 = "ABC";
    s15 = "ABE";
    cout << (s14 == s15) << endl; // Displays 0 (means false)
    cout << (s14 != s15) << endl; // Displays 1 (means true)
    cout << (s14 > s15) << endl; // Displays 0 (means false)
    cout << (s14 >= s15) << endl; // Displays 0 (means false)

    return 0;
}