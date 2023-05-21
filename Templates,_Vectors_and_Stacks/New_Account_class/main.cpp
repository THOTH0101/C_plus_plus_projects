/*
 *  An Account class was specified in Programming Exercise 9.3. Modify the Account class as follows:
 * * n Assume that the interest rate is same for all accounts. So, the annualInterestRate property should be static.
 * * n Add a new data field name of the string type to store the name of the customer.
 * * n Add a new constructor that constructs an account with the specified name, id, and balance.
 * * n Add a new data field named transactions whose type is vector<Transaction> that stores the transaction for
 * the accounts. Each transaction is an instance of the Transaction class. The Transaction class is defined as
 * shown in Figure 12.4.
 * * n Modify the withdrawal and deposit functions to add a transaction to the transactions vector.
 * * n All other properties and functions are same as in Programming Exercise 9.3.
 *
 * (The get and set functions for these data fields are provided in the class,
 * but omitted in the UML diagram for brevity.)
 * Transaction                          description
 *  -date:Date                          The date of this transaction. Date is defined in Exercise 9.8.
 *  -type:char                          The type of the transaction, such as 'W' for withdrawal,
 *                                      'D' for deposit, etc.
 *  -amount: double                     The amount of the transaction.
 *  -balance: double                    The new balance after this transaction.
 *  -description: string                The description of this transaction.
 *  +Transaction(type: char,            Construct a Transaction with the specified date, type, balance,
 *  amount: double, balance:double,     and description.
 *  description: string)
 *
 *  Write a test program that creates an Account with annual interest rate 1.5%, balance 1000, id 1122, and name
 *  George. Deposit $30, $40, $50 to the account and withdraw $5, $4, $2 from the account. Print account summary
 *  that shows account holder name, interest rate, balance, and all transactions.
 *
 * */
#include "Account.h"
using namespace std;

int main()
{
    Account account("George", 1122, 1000, 1.5); //account object

    //make deposit
    account.deposit(30);
    account.deposit(40);
    account.deposit(50);

    //make withdrawal
    account.withdraw(5);
    account.withdraw(4);
    account.withdraw(2);

    //print account summary
    for(auto & transaction : account.transactions)
        transaction.printTransaction();

    return 0;
}
