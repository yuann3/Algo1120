from typing import List

class Solution:
  def removeDuplicates(self, nums: List[int]) -> int:
    # Initialize a pointer to track the position of the last unique element
    L = 1;

    # Iterate over the array starting from the second element
    for R in range(1, len(nums)):
      # If the current element is not equal to the previous one
      if nums[R] != nums[R - 1]:
        # Move the current element to the position after the last unique element
        nums[L] = nums[R]
        # Increment the pointer
        L += 1
    # Return the number of unique elements
    return L
