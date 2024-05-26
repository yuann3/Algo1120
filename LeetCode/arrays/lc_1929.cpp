#include <vector>
#include <iostream>

using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    ans.reserve(2 * n);

    ans.insert(ans.end(), nums.begin(), nums.end());
    ans.insert(ans.end(), nums.begin(), nums.end());

    return ans;
}

// int main() {
//     vector<int> nums = {1, 3, 2, 1};
//     vector<int> ans = getConcatenation(nums);

//     cout << "array: ";
//     for (int num : ans) {
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }
