#include <iostream>
using namespace std;

int main()
{
    cout << "Pattern A";
    cout << "    ";
    cout << "Pattern B";
    cout << "             ";
    cout << "Pattern C";
    cout << "    ";
    cout << "Pattern D\n";
    int f = 3;
    int columns = 1;
    int space = 1;

    //construct loop for all four pattern
        for(int a = 1; a <= 6; a++)//number of overall rows
        {

            //loop for pattern A
            for(int b = 1; b <= 6; b++)//number of columns and its display pattern in each iteration
            {
                if(a == 1 || a == 6)//display if a is 1 or 6
                    cout << b;
                else
                {
                    if(b > 1 && b < 6)//if b between 1 and 6 replace with space
                        cout << " ";
                    else
                        cout << b;
                }
            }
            cout << "   ";//space before the next pattern

            //loop for pattern B
            for(int c = 6 - a; c > 0; c--)//add decreasing number of space for first half pyramid
                cout << "  ";
            if(a < 6)//stop printing once a is less than 6
            {
                for(int d = 1; d <= a; d++)//first half of pyramid and its display pattern in each iteration
                {
                    cout << " " << d;
                }
                for(int e = 1; e < a; e++)//other half of pyramid
                {
                    if(f >= 9)
                        cout << " " << f++ - 3;//if greater than 9 reduce each print by -3
                    else if(f > 5)
                        cout << " " << f++ - 1;//if greater than 5 reduce each print by -1
                    else
                        cout << " " << f++;
                }
            }
            else
                cout << "                      ";

            for(int g = 6 - a; g > 0; g--)//loop to control space pattern for other pyramid
                cout << "  ";

            cout << "    ";//space before the next pyramid

            //loop for pattern C
            for(int h = 3; h > space; h--)//loop to control space pattern for half diamond
                cout << " ";
            if(a < 3)//if a less than 3 increase
                space++;
            else
                space--;
            for(int i = 1; i <= columns; i++)//number columns in each iteration
                cout << 3;
            if(a < 3)//if a is less than 3 increase number of columns
                columns++;
            else
                columns--;

            cout << "         ";//space before the next pattern

            //loop for pattern D
            for(int j = 6 - a; j > 0; j--)//decreasing number of space for inverted right angle
                cout << "  ";
            for(int k = 1; k <= a; k++)//loop to control printing pattern
                cout << " " << k;
            cout << endl;
        }
        return 0;
}