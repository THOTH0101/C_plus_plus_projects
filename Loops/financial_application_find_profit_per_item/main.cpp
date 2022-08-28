#include <iostream>
using namespace std;

int main()
{
    const int PROFIT_FOR_THE_YEAR = 50000;
    const int PROFIT_PER_ITEM = 5;
    int quantityOfItem = 5000;
    int profit = 9000;

    //compute quantity of item require to profit 50000
    do{
        profit+=PROFIT_PER_ITEM;
        quantityOfItem++;
    } while (profit <= PROFIT_FOR_THE_YEAR);

    //print the quantity of item
    cout << "The minimum quantity of item needed to make $50,000 is " << quantityOfItem << endl;

    return 0;
}