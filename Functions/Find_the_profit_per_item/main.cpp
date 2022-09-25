#include <iostream>
#include <iomanip>
using namespace std;

double computeProfitPerItem(double quantity);

int main()
{
    double profitPerItem = 0;

    //table title
    cout << "Quantity\t\tProfit-per-item (in $)" << endl;

    //loop to compute profit-per-item
    for(int quantity = 1000; quantity <= 10000; quantity += 1000)
    {
        profitPerItem += computeProfitPerItem(quantity);
        cout << quantity << setw(8) << "\t\t";
        cout << profitPerItem << endl;
    }

    return 0;
}

//function to compute profit-per-item
double computeProfitPerItem(double quantity)
{
    if(quantity <= 1000)
        return 1 * 1000;
    else if(quantity <= 5000)
        return 2 * 1000;
    else
        return 5 * 1000;
}