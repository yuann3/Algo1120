// This implements a class that represents an
// account object for double numbers of a currency.
// Programmer: Alex Mendes
// Last modified:  24 Feb 2023, Kyle Harrison
// This file should be used in conjunction with Lab 2 for SENG1120

#include "account.h"

Account::Account(double open_amt)
{
    acc_balance = open_amt;
}

void Account::deposit(double amount)
{
    acc_balance += amount;
}

void Account::withdraw(double amount)
{
    acc_balance -= amount;
}

double Account::balance() const
{
    return acc_balance;
}

bool Account::has_funds() const
{
	if (acc_balance > 0.0) {return true;} else {return false;}
}
