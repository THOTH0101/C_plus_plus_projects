#include <iostream>
using namespace std;

const int MAXn = 100;
//function prototype
double totalAsset(double balance, int bankID, int n, const double loan[][MAXn]); //to compute total asset of certain bank
bool isSafe(double limit, int bankID, int n, const double bankInfo[][MAXn], const double loan[][MAXn]); //to check if bank is financially safe
void updateLoan(double limit, int n, const double bankInfo[][MAXn], double loan[][MAXn], int unsafe[]); //update loan list to update number safe and unsafe bank

int main()
{
    int i, j, n;
    double limit;

    //prompt user for number of banks
    cout << "Enter the number of banks: ";
    cin >> n;

    //prompt user for limit
    cout << "Enter the minimum asset: ";
    cin >> limit;

    double bankInfo[n][MAXn];
    double loan[n][MAXn];

    //initialise array default to 0
    for(i = 0; i < n; i++)
        for(j = 0; j < MAXn; j++)
            bankInfo[i][j] = 0;

    //initialise array default to 0
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            loan[i][j] = 0;


    //prompt user for bank info base on categories
    cout << "Enter the bank’s balance, the number of banks that borrowed money from the bank, pair borrower into "
            "borrower's id and amount borrowed:" << endl;
    for(i = 0; i < n; i++)
    {
        cin >> bankInfo[i][0] >> bankInfo[i][1];

        const int SIZE = static_cast<int>(bankInfo[i][1]);

        for(j = 0; j < SIZE * 2; j++)
            cin >> bankInfo[i][j + 2];

        //compute a table for amount loan out
        int k;
        for(j = 2, k = 3; j <= SIZE + 2; j+=2, k+=2)
        {
            int bankID = static_cast<int>(bankInfo[i][j]);
            loan[i][bankID] = bankInfo[i][k];
        }
    }

    int unsafe[n]; //list of banks that are unsafe

    //initialize array to 0
    for(i = 0; i < n; i++)
        unsafe[i] = 0;

    updateLoan(limit, n, bankInfo, loan, unsafe);

    return 0;
}

//function prototype
double totalAsset(double balance, int bankID, int n, const double loan[][MAXn])
{
    double asset = balance;

    for(int i = 0; i < n; i++)
        asset += loan[bankID][i];

    return asset;
}

bool isSafe(double limit, int bankID, int n, const double bankInfo[][MAXn], const double loan[][MAXn])
{
    double asset = totalAsset(bankInfo[bankID][0], bankID, n, loan);

    if(asset < limit)
        return false;

    return true;
}

void updateLoan(double limit, int n, const double bankInfo[][MAXn], double loan[][MAXn], int unsafe[])
{
    int i, j, k;

    for(i = 0; i < n; i++)
    {
        if(!isSafe(limit, i, n, bankInfo, loan))
            unsafe[i]++;
    }

    //update loan list
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(unsafe[j] != 0)
            {
                loan[i][j] = 0; //update loan
            }

            for(k = 0; k < n; k++)
            {
                if(!isSafe(limit, k, n, bankInfo, loan))
                    unsafe[k]++; //update unsafe
            }
        }
    }

    cout << "Unsafe banks are ";

    for(i = 0; i < n; i++)
        if(unsafe[i] != 0)
            cout << i << " ";
}