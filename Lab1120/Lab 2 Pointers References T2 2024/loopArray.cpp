//Lab2 Additional Tasks - 1
//file name: loopArray.cpp
//Student name: Yiyuan Li (C3434681)
//Date: 14 May 9:20
#include <algorithm>
#include <iostream>
#include <vector>
#include <random>

class Account {
public:
    double balance;

    explicit Account(double initial_balance) : balance(initial_balance) {}

    double getBalance() const {
        return balance;
    }
};

std::vector<Account> initializeAccounts() {
    std::vector<Account> accounts;
    for (int i = 1; i <= 10; ++i) {
        accounts.emplace_back(i * 100.0); // Each account has balance of 100*i
    }

    std::random_device rd;  // Obtain a random number from hardware
    std::default_random_engine engine(rd()); // Seed the generator
    std::shuffle(accounts.begin(), accounts.end(), engine); // Shuffle the accounts

    return accounts;
}

void bubble_sort(std::vector<Account>& accounts) {
    bool swapped;
    int n = accounts.size();
    do {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (accounts[i - 1].getBalance() > accounts[i].getBalance()) {
                std::swap(accounts[i - 1], accounts[i]);
                swapped = true;
            }
        }
        n--;
    } while (swapped);
}

void output_all(const std::vector<Account>& accounts) {
    for (const auto& account : accounts) {
        std::cout << "Account balance: $" << account.getBalance() << std::endl;
    }
}

int main() {
    std::vector<Account> accounts = initializeAccounts();
    std::cout << "Original shuffled account balances:" << std::endl;
    output_all(accounts);
    bubble_sort(accounts);
    std::cout << "Sorted account balances:" << std::endl;
    output_all(accounts);
    return 0;
}
