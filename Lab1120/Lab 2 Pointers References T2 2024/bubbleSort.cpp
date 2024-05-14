//Lab2 Additional Tasks - 2
//file name: bubbleSort.cpp
//Student name: Yiyuan Li (C3434681)
//Date: 14 May
#include <iostream>
#include <vector>

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
        accounts.emplace_back(i * 98.1);
    }
    return accounts;
}

void output_all(const std::vector<Account>& accounts) {
    for (const auto& account : accounts) {
        std::cout << "Account balance: $" << account.getBalance() << std::endl;
    }
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

int main() {
    std::vector<Account> accounts = initializeAccounts();

    std::cout << "Original account balances:" << std::endl;
    output_all(accounts);

    bubble_sort(accounts);

    std::cout << "Sorted account balances:" << std::endl;
    output_all(accounts);

    return 0;
}
