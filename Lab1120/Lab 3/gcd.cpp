// Lab3b - Challenge Tasks
// Filename: gcd.cpp
// Student name: Yiyuan Li (C3434681)
// Date: 15 March

#include <iostream>
#include <iterator>
#include <ostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Input two integers, greater than zero:" << endl;
    cout << "Integer 1: ";
    cin >> num1;
    cout << "Integer 2: ";
    cin >> num2;

    int result = gcd(num1, num2);
    std::cout << "The Greatest Common Denominator of " << num1 << " and "
              << num2 << " is " << result << std::endl;
    return 0;
}
