#include <iostream>
using namespace std;

int removeDuplicates(int* nums, int numsSize) {
    int indx = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[indx] = nums[i];
            indx++;
        }
    }
    return indx;
}

// int main() {
//   // Initialize an array with some duplicates
//   int nums[] = {1, 1, 2, 2, 3, 3, 4, 4, 5};
//   int numsSize = sizeof(nums) / sizeof(nums[0]);

//   // Call the function to remove duplicates
//   int newSize = removeDuplicates(nums, numsSize);

//   // Print the new size and the array without duplicates
//   cout << "New size: " << newSize << endl;
//   cout << "Array without duplicates: ";
//   for (int i = 0; i < newSize; i++) {
//     cout << nums[i] << " ";
//   }
//   cout << endl;

//   return 0;
// }
