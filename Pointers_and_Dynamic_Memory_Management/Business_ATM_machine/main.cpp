#include <iostream>
#include "Account.h"
using namespace std;

//function prototype
int idCheck();
void displayMenu();
void performTask(Account* accounts, int id, int choice);

int main()
{
    //Create 10 accounts in an array with id 0,1, . . . , 9, and initial balance $100
    auto* accounts = new Account[10];
    for(int i = 1; i < 11; i++)
        accounts[i - 1] = *new Account(i, 100.0);

    //prompts the user to enter an id
    int id = idCheck();

    while(true)
    {
        displayMenu();
        int choice;
        cin >> choice;

        //if choice is 4, exit and system will prompt for an id again
        if(choice == 4)
            id = idCheck();

        performTask(accounts, id, choice);
    }
}

//function implementation
int idCheck()
{
    cout << "Enter an id: ";
    int id;
    cin >> id;

    //check if id is correct
    while(id < 1 || id > 10)
    {
        cout << "Invalid id! please enter a valid id: ";
        cin >> id;
    }
}

void displayMenu()
{
    cout << "Main menu\n1: check balance\n2: withdraw\n3: deposit\n4: exit" << endl;
    cout << "Enter a choice: ";
}

void performTask(Account* accounts, int id, int choice)
{
    switch (choice)
    {
        case 1:
            cout << "The balance is " << accounts[id - 1].balance << endl;
            cout << endl;
            break;
        case 2:
            cout << "Enter an amount to withdraw: ";
            double withdrawal;
            cin >> withdrawal;
            accounts[id - 1].withdraw(withdrawal);
            cout << endl;
            break;
        case 3:
            cout << "Enter an amount to deposit: ";
            double deposited;
            cin >> deposited;
            accounts[id - 1].deposit(deposited);
            cout << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            cout << endl;
            break;
    }
}