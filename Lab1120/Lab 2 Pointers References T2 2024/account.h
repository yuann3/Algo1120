// Student name: Yiyuan Li (C3434681)
// Date : 13 May 18:56:30
// This defines a class that represents an
// account object for double numbers of a currency.
// Programmer: Alex Mendes
// Last modified:  24 Feb 2023, Kyle Harrison
// This file should be used in conjunction with Lab 2 for SENG1120

#ifndef SENG1120_ACCOUNT_H
#define SENG1120_ACCOUNT_H

#endif

class Account
{
public:
    // Members that are externally visible

    // These are member functions

    // Constructor
    // Precondition: none
    // Postcondition: A new instance of account is created
    // and its instance data initialsed to either zero or a
    // parameter-provided value
    Account(const double open_amt = 0.0);

    // Members that mutate data

    // Precondition: acct_balance has been initialised
    // Postcondition: amount is added to the acct_balance
    void deposit(const double amount);

    // Precondition: acct_balance has been initialised
    // Postcondition: amount is subtracted from the acct_balance
    void withdraw(const double amount);

    // Members that query data

    // Precondition: acct_balance has been initialised
    // Postcondition: The value of acct_balance is returned
    double balance() const;

    // Precondition: acct_balance has been initialised
    // Postcondition: Returns true if acct_balance is greater
    //                 than zero, false otherwise
    bool has_funds() const;

private:

    double acc_balance;
};
