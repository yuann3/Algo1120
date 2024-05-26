// FibonacciNums.cpp
// Author: Yiyuan Li (C3434681)
// Date: 08-05-2024
#include <iostream>

void PrintFibonacciNumbers(int limit) {
    int f1 = 0, f2 = 1;

    if (limit < 1)
        return;

    while (f1 <= limit){
        std::cout << f1 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

// int main() {
//     int limit;
//     std::cout << "Enter a number: ";
//     std::cin >> limit;
//     PrintFibonacciNumbers(limit);
//     return 0;
// }
