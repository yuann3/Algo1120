# Insert n into arr at the next open index
# Length is the number of 'real' values in arr, and capacity is the total number of elements in arr
def insertEnd(arr, n, length, capacity):
  if length < capacity:
    arr[length] = n

# Remove the last element from arr if arr is not empty
def removeEnd(arr, length):
  if length > 0:
    arr[length - 1] = 0

# Insert n into arr at index i after shifiting elements to the right
def insertMiddle(arr, i, n, length):
  # Shift starting from the end to i
  for index in range(length - 1, i - 1, -1):
    arr[index + 1] = arr[index]
  # Insert at i
  arr[i] = n
  
# Remove value at index i before shifting elements to the left.
# Assuming i is a valid index.
def removeMiddle(arr, i, length):
    # Shift starting from i + 1 to end.
    for index in range(i + 1, length):
        arr[index - 1] = arr[index]
    # No need to 'remove' arr[i], since we already shifted

def printArr(arr, capacity):
    for i in range(capacity):
        print(arr[i])