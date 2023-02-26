//
// Created by thoth on 2/25/23.
//

#include "Stock.h"

Stock::Stock(std::string nSymbol, std::string nName, double nPreviousClosingPrice)
{
    symbol = nSymbol;
    name = nName;
    previousClosingPrice = nPreviousClosingPrice;
}

string Stock::getSymbol()
{
    return symbol;
}

string Stock::getName()
{
    return name;
}

double Stock::getPreviousClosingPrice()
{
    return previousClosingPrice;
}

double Stock::getCurrentPrice()
{
    return currentPrice;
}

void Stock::setPreviousClosingPrice(double newPrice)
{
    previousClosingPrice = newPrice;
}

void Stock::setCurrentPrice(double newPrice)
{
    currentPrice = newPrice;
}

double Stock::getChangePercentage() const
{
    return ((currentPrice - previousClosingPrice) / previousClosingPrice) * 100;
}