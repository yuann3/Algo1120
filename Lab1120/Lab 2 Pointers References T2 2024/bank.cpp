// This program creates an instance of a simple account object and
// performs some operations on it
// Programmer:  Alex Mendes
// Last modified:  24 Feb 2023, Kyle Harrison
// This file should be used in conjunction with Lab 2 for SENG1120

#include <iostream>
#include "account.h"

using namespace std;

int main()
{
    cout << "Creating first account with initial amount 10" << endl;

    Account my_account1;
    my_account1.deposit(10);

	if (my_account1.has_funds())
    {
        cout << "Balance is " << my_account1.balance() << endl;
        cout << "Deposit 100" << endl;
        my_account1.deposit(100);
        cout << "Balance is " << my_account1.balance() << endl;
        cout << "Withdraw 75" << endl;
        my_account1.withdraw(75);
        cout << "Balance is " << my_account1.balance() << endl;
    }
    else
    {
		cout << "Account is empty" << endl;
	}
		cout << "Creating second account with initial amount 0" << endl;
		Account my_account2;
		my_account2.deposit(0);
		if (my_account2.has_funds())
		{
			cout << "Balance is " << my_account2.balance() << endl;
			cout << "Deposit 200" << endl;
			my_account2.deposit(200);
			cout << "Balance is " << my_account2.balance() << endl;
			cout << "Withdraw 140" << endl;
			my_account2.withdraw(140);
			cout << "Balance is " << my_account2.balance() << endl;
		}
		else {cout << "Account is empty" << endl;}

		return 0;
}
