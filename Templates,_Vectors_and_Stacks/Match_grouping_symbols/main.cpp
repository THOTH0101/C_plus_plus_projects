/*
 *(Match grouping symbols) A C++ program contains various pairs of grouping symbols, such as the following:
 *
 * * Parentheses: ( and ).
 * * Braces: { and }.
 * * Brackets: [ and ].
 *
 * Note that the grouping symbols cannot overlap. For example, (a{b)} is illegal. Write a program that
 * checks whether a C++ source-code file has correct pairs of grouping symbols.
 *
 * */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//function prototype
bool isSymbolsCorrect(vector<char>& symbols, char ch);

int main()
{
    vector<char> symbols;
    ifstream input;
    input.open("SentinelValue.cpp");

    //if the file exit
    if(input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }

    while(!input.eof())
    {
        char ch;
        input.get(ch);

        if(input.eof()) break; //make sure the last element is not repeated

        //check each character
        if(ch == '(' || ch == '[' || ch == '{')
            symbols.push_back(ch);
        else if(ch == ')' || ch == ']' || ch == '}')
            if(!isSymbolsCorrect(symbols, ch))
                break;
    }

    cout << "The C++ source-code " << (symbols.empty() ? "has" : "does not have") << " correct pairs" << endl;

    input.close();

    return 0;
}

//function implementation
bool isSymbolsCorrect(vector<char>& symbols, char ch)
{
    if(symbols.back() == '(' && ch == ')' || symbols.back() == '{' && ch == '}'
        || symbols.back() == '[' && ch == ']')
        symbols.pop_back();
    else if(symbols.back() != '(' && ch == ')' || symbols.back() != '{' && ch == '}'
            || symbols.back() != '[' && ch == ']')
        return false;

    return true;
}