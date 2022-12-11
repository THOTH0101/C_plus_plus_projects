#include <iostream>
using namespace std;

//function prototype
int getIncomeLevel(const int brackets[][5], int status, double income); //to obtain the category income falls
double getTax(const int brackets[][5], int status, int incomeLevel, double income, const double rates[]); //to obtain tax base on category

int main()
{
    // Prompt the user to enter filing status
    cout << "(0-single filer, 1-married jointly, "
         << "or qualifying widow(er), " << endl
         << "2-married separately, 3-head of household)" << endl
         << "Enter the filing status: ";

    int status;
    cin >> status;

    //prompt user to enter taxable income
    cout << "Enter the taxable income: ";
    double income;
    cin >> income;

    //compute tax
    double tax;

    //tax rate
    double rates[] = {0.10, 0.15, 0.25, 0.28, 0.33, 0.35}; //rates for each tax level

    //tax for status filer
    int brackets[4][5] =
            {
            {8350, 33950, 82250, 171550, 372950},//Single filer
            {16700, 67900, 137050, 20885, 372950},//Married jointly or qualifying widow(er)
            {8350, 33950, 68525, 104425, 186475},//Married separately
            {11950, 45500, 117450, 190200, 372950}//Head of household
            };

    int incomeLevel = getIncomeLevel(brackets, status, income); //invoke to get income level or category
    tax = getTax(brackets, status, incomeLevel, income, rates); //invoke to get tax

    //display the result
    cout << "Tax is " << static_cast<int>(tax * 100) / 100.0 << endl;

    return 0;
}

//function definition
int getIncomeLevel(const int brackets[][5], int status, double income)
{
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        if(income > brackets[status][i])
            count++;
    }

    return count;
}

double getTax(const int brackets[][5], int status, int incomeLevel, double income, const double rates[])
{
    double tax = 0;
    int i, j = 0;

    //conditional statement to compute tax
    if(incomeLevel == 0)
    {
        tax += income * rates[status];
    }
    else
    {
        tax += brackets[status][0] * rates[0];

        if(incomeLevel > 1)
        {
            //loop to compute tax for incomeLevel > 1
            for (i = 1; i < incomeLevel; i++) {
                tax += (brackets[status][i] - brackets[status][j]) * rates[i];
                j = i;
            }
        }

        tax += (income - brackets[status][incomeLevel - 1]) * rates[incomeLevel];
    }

    return tax; //return tax
}