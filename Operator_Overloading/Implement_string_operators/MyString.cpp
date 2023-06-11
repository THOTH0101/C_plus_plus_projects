//
// Created by thoth on 6/8/23.
//

#include <cstring>
#include "MyString.h"
using namespace std;

MyString::MyString()
{
    str = new char[1];
    str[0] = '\0';
}

MyString::MyString(const char *cString)
{
    str = new char[strlen(cString) + 1];
    strcpy(str, cString);
    str[strlen(cString)] = '\0';
}

char MyString::at(int index) const
{
    return str[index];
}

int MyString::length() const
{
    return int(strlen(str));
}

void MyString::clear()
{
    delete [] str;
    str = new char[1];
    str[0] = '\0';
}

bool MyString::empty() const
{
    return (str[0] == '\0');
}

int MyString::compare(const MyString &s) const
{
    if(strlen(str) == s.length())
    {
        int c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (str[i] != s[i])
                c += str[i] - s[i];
        }

        //conditions for comparison
        if (c == 0)
            return 0;
        else if (c < 0)
            return -1;
        else
            return 1;
    }
    else if(strlen(str) < s.length())
        return -1;
    else
        return 1;
}

int MyString::compare(int index, int n, const MyString &s) const
{
    compare(s.substr(index, n));
}

void MyString::copy(char *s, int index, int n)
{
    for(int i = index, j = 0; i < index + n; i++, j++)
    {
        s[j] = str[i];
    }
}

char *MyString::data() const
{
    return str;
}

int MyString::find(char ch) const
{
    find(ch, 0);
}

int MyString::find(char ch, int index) const
{
    for(int i = index; i < strlen(str); i++)
    {
        if(str[i] == ch)
            return i;
    }
    return static_cast<int>(string::npos);
}

int MyString::find(const MyString &s, int index) const
{
    find(s[0], index);
}

MyString::MyString(const char ch, int size)
{
    str = new char[size];
    for(int i = 0; i < size; i++)
        str[i] = ch;

    str[size] = '\0';
}

MyString::MyString(const char *chars, int size)
{
    str = new char[size];
    for(int i = 0; i < size; i++)
        str[i] = chars[i];
    str[size] = '\0';
}

MyString MyString::append(const MyString &s)
{
    append(s, 0, s.length());
}

MyString MyString::append(const MyString &s, int index, int n)
{
    int size = int(strlen(str)) + s.length();
    char* append;
    append = str;
    MyString temp = s.substr(index, n);

    for(int i = int(strlen(str)), j = 0; i < size; i++, j++)
        append[i] = temp[j];

    return {append};
}

MyString MyString::append(int n, char ch)
{
    int size = int(strlen(str)) + n;
    char* append;
    append = str;

    for(int i = int(strlen(str)); i < size; i++)
        append[i] = ch;

    return {append};
}

MyString MyString::assign(const char *chars)
{
    MyString temp = MyString(chars);
    assign(temp, 0, temp.length());
}

MyString MyString::assign(const MyString &s, int index, int n)
{
    MyString temp = s.substr(index, n);
    clear();
    append(temp.data());
}

MyString MyString::assign(const MyString &s, int n)
{
    assign(s, 0, n);
}

MyString MyString::assign(int n, char ch)
{
    MyString temp(ch, n);
    str = temp.str;
}

MyString MyString::substr(int index, int n) const
{
    char* c = new char[n];
    for(int i = index, j = 0; i < index + n; i++, j++)
    {
        c[j] = str[i];
    }
    MyString temp(c);
    return temp;
}

MyString MyString::substr(int index) const
{
    substr(index, int(strlen(str)));
}

MyString MyString::erase(int index, int n)
{
    MyString s1 = substr(0, index);
    MyString s2 = substr(n + index, int(strlen(str)));
    return s1.append(s2);
}

char &MyString::operator[](int index) const
{
    return str[index];
}

MyString &MyString::operator+=(const MyString &s)
{
    *this = append(s);
    return *this;
}

istream& operator>>(istream& in, const MyString& s)
{
    in >> s.str;
    return in;
}

ostream& operator<<(ostream& out, const MyString& s)
{
    out << s.data();
    return out;
}

MyString operator+(const MyString& s1, const MyString& s2)
{
    MyString temp(s1.data());
    return temp.append(s2);
}

bool operator==(const MyString& s1, const MyString& s2)
{
    return s1.compare(s2) == 0;
}

bool operator!=(const MyString& s1, const MyString& s2)
{
    return s1.compare(s2) != 0;
}

bool operator>(const MyString& s1, const MyString& s2)
{
    return s1.compare(s2) > 0;
}

bool operator>=(const MyString& s1, const MyString& s2)
{
    return s1.compare(s2) >= 0;
}