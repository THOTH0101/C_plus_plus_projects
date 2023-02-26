//
// Created by thoth on 2/25/23.
//

#ifndef THE_STOCK_CLASS_STOCK_H
#define THE_STOCK_CLASS_STOCK_H
#include <string>
using namespace std;

class Stock
{
public:
    Stock(string nSymbol, string nName, double nPreviousClosingPrice);
    string getSymbol();
    string getName();
    double getPreviousClosingPrice();
    double getCurrentPrice();
    void setPreviousClosingPrice(double newPrice);
    void setCurrentPrice(double newPrice);
    double getChangePercentage() const;

private:
    string symbol;
    string name;
    double previousClosingPrice;
    double currentPrice;
};

#endif //THE_STOCK_CLASS_STOCK_H
