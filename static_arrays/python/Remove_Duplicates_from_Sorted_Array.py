from typing import List

class Solution:
  def removeDuplicates(self, nums: List[int]) -> int:
    # Initialize a pointer to track the position of the last unique element
    l = 1;
    
    # Iterate over the array starting from the second element
    for r in range(1, len(nums)):
      # If the current element is not equal to the previous one
      if nums[r] != nums[r - 1]:
        # Move the current element to the position after the last unique element
        nums[l] = nums[r]
        # Increment the pointer
        l + 1
    # Return the number of unique elements
    return l