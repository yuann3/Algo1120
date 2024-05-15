// Lab 2 Additional Tasks - 2
// Filename: bubbleSort.cpp
// Student name: Yiyuan Li (C3434681)
// Date: 14 March

#include <iostream>
#include <vector>

// Defines the Account class with public member balance
class Account {
public:
    double balance;  // Stores the balance of the account

    // Constructor that initializes the account with a specified initial balance
    explicit Account(double initial_balance) : balance(initial_balance) {}

    // Returns the current balance of the account
    double getBalance() const {
        return balance;
    }
};

// Creates and returns a vector of Account objects initialized with balances
std::vector<Account> initializeAccounts() {
    std::vector<Account> accounts;
    for (int i = 1; i <= 10; ++i) {
        accounts.emplace_back(i * 98.1); // Each account balance is set as a multiple of 98.1
    }
    return accounts;
}

// Prints the balance of all accounts in the vector
void output_all(const std::vector<Account>& accounts) {
    for (const auto& account : accounts) {
        std::cout << "Account balance: $" << account.getBalance() << std::endl;
    }
}

// Sorts a vector of Account objects based on their balance using the bubble sort algorithm
void bubble_sort(std::vector<Account>& accounts) {
    bool swapped; // Flag to notify if any swap has occurred
    int n = accounts.size(); // Number of accounts
    do {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (accounts[i - 1].getBalance() > accounts[i].getBalance()) {
                // Swaps two elements if they are in the wrong order
                std::swap(accounts[i - 1], accounts[i]);
                swapped = true;
            }
        }
        n--;
    } while (swapped); // Repeat until no swaps occurred in the last pass
}

int main() {
    std::vector<Account> accounts = initializeAccounts(); // Initialize Account objects

    std::cout << "Original account balances:" << std::endl;
    output_all(accounts); // Display original balances

    bubble_sort(accounts); // Perform bubble sort on the accounts

    std::cout << "Sorted account balances:" << std::endl;
    output_all(accounts); // Display sorted balances

    return 0;
}
