#include <iostream>
#include <string>
using namespace std;

//function prototype
int* count(const string& s);
void count(const string& s, int counts[], int size);
void printArray(int* list, int size);

int main()
{
    const int SIZE = 10;
    int* Counts = count("12203AB3");
    printArray(Counts, SIZE);

    cout << endl;

    int* counts = new int[SIZE];
    count("SSN is 343 32 4545 and ID is 434 34 4323", counts, SIZE);

    return 0;
}

//function implementation
int* count(const string& s)
{
    int* counts = new int[10];

    for(char j : s)
    {
        if(isdigit(j))
            counts[j - '0']++;
    }

    return counts;
}

void count(const string& s, int counts[], int size)
{
    for(char j : s)
    {
        if(isdigit(j))
            counts[j - '0']++;
    }

    for(int i = 0; i < size; i++)
    {
        if(counts[i] > 0)
            cout << i << " occurred " << counts[i] << (i > 1 ? "times" : "time") << endl;
    }
}

void printArray(int* list, int size)
{
    for(int i = 0; i < size; i++)
    {
        if (list[i] != 0)
            cout << i << " occurred " << list[i] << (i > 1 ? "times" : "time") << endl;
    }
}