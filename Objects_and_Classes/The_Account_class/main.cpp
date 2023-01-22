#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    //create an object
    Account account(1122, 20000, 4.5);

    account.withdraw(2500); //withdraw $2500

    account.deposit(3000); //deposit $3000

    //display properties
    cout << "Your new balance is " << account.balance << " with " << account.getMonthlyInterestRate()
    << " monthly interest" << endl;

    return 0;
}
