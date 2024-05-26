#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        int sum = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int first = stack.top();
                stack.pop();
                int second = stack.top();
                stack.push(first);
                stack.push(first + second);
                sum += first + second;
            } else if (operations[i] == "D") {
                sum += stack.top() * 2;
                stack.push(stack.top() * 2);
            } else if (operations[i] == "C") {
                sum -= stack.top();
                stack.pop();
            } else {
                sum += stoi(operations[i]);
                stack.push(stoi(operations[i]));
            }
        }
        return sum;
    }
};

// // Main function to run the solution
// int main() {
//     Solution solution;

//     // Example input
//     vector<string> ops;
//     ops.push_back("5");
//     ops.push_back("2");
//     ops.push_back("C");
//     ops.push_back("D");
//     ops.push_back("+");
    
//     // Calculate result
//     int result = solution.calPoints(ops);
    
//     // Output result
//     cout << "The total sum of the points is: " << result << endl;

//     return 0;
// }
