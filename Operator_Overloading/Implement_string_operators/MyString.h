//
// Created by thoth on 6/8/23.
//

#ifndef IMPLEMENT_STRING_OPERATORS_MYSTRING_H
#define IMPLEMENT_STRING_OPERATORS_MYSTRING_H

#include <iostream>
using namespace std;
class MyString
{
public:
    MyString();
    MyString(const char* cString);
    char at(int index) const;
    int length() const;
    void clear();
    bool empty() const;
    int compare(const MyString& s) const;
    int compare(int index, int n, const MyString& s) const;
    void copy(char s[], int index, int n);
    char* data() const;
    int find(char ch) const;
    int find(char ch, int index) const;
    int find(const MyString& s, int index) const;
    MyString(char ch, int size);
    MyString(const char chars[], int size);
    MyString append(const MyString& s);
    MyString append(const MyString& s, int index, int n);
    MyString append(int n, char ch);
    MyString assign(const char* chars);
    MyString assign(const MyString& s, int index, int n);
    MyString assign(const MyString& s, int n);
    MyString assign(int n, char ch);
    MyString substr(int index, int n) const;
    MyString substr(int index) const;
    MyString erase(int index, int n);

    //define the following operators are member function
    char& operator[](int index) const; //Accesses characters using the array subscript operator.
    MyString& operator+=(const MyString& s); //Appends the contents of one string to the other

    //Extracts characters from a stream to a string delimited by a whitespace or the null terminator character
    friend istream& operator>>(istream& in, const MyString& s);
    friend ostream& operator<<(ostream& out, const MyString& s);

private:
    char* str;
};

//define the following operators: >>, ==, !=, >, >= non-member function
MyString operator+(const MyString& s1, const MyString& s2); //Concatenates two strings into a new string

//define relational operator for comparing
bool operator==(const MyString& s1, const MyString& s2);
bool operator!=(const MyString& s1, const MyString& s2);
bool operator>(const MyString& s1, const MyString& s2);
bool operator>=(const MyString& s1, const MyString& s2);

#endif //IMPLEMENT_STRING_OPERATORS_MYSTRING_H