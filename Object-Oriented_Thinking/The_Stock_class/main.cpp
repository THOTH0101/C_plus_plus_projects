#include <iostream>
#include "Stock.h"
using namespace std;

int main()
{
    //create new object
    Stock stock("MSFT", "Microsoft Corporation", 27.5);

    //set the current price
    stock.setCurrentPrice(27.6);

    //display the price-change percentage
    cout << "The percentage change in stock price is: " << stock.getChangePercentage() << endl;

    return 0;
}
