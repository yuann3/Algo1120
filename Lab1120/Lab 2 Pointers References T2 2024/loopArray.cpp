//Lab2 Additional Tasks - 1
//file name: loopArray.cpp
//Student name: Yiyuan Li (C3434681)
//Date: 14 May 9:20
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
        accounts.emplace_back(i * 100.0); // Each account has balance of 100*i
    }
    return accounts;
}

void output_all(const std::vector<Account>& accounts) {
    for (const auto& account : accounts) {
        std::cout << "Account balance: $" << account.getBalance() << std::endl;
    }
}

int main() {
    std::vector<Account> accounts = initializeAccounts();
    output_all(accounts);
    return 0;
}
