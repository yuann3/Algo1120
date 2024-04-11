#include <iostream>
using namespace std;

/**
 * This function inserts an element at the end of a static array.
 *
 * @param arr[] The array in which the element is to be inserted.
 * @param n The element to be inserted.
 * @param length The current length of the array.
 * @param capacity The total capacity of the array.
 */
void insertEnd(int arr[], int n, int length, int capacity) {
  if (length < capacity)
    arr[length] = n;
}

/**
 * This function removes an element from the end of a static array.
 *
 * @param arr[] The array from which the element is to be removed.
 * @param length The current length of the array.
 */
void removeEnd(int arr[], int length) {
  if (length > 0) 
    arr[length - 1] = 0;
}

/**
 * This function removes an element from a specific position in a static array.
 *
 * @param arr[] The array from which the element is to be removed.
 * @param i The index of the element to be removed.
 * @param length The current length of the array.
 */
void removeMiddle(int arr[], int i, int length) {
  for (int index = i + 1; index < length; index++)
    arr[index - 1] = arr[index];
}

void printArr(int arr[], int capacity) {
  for (int i = 0; i < capacity; i++)
    cout << arr[i] << ' ';
  cout << endl;
}