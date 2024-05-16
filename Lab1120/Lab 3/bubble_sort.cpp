// Lab3b - Challenge Tasks
// Filename: bubble_sort.cpp
// Student name: Yiyuan Li (C3434681)
// Date: 15 March

#include <vector>
#include <iostream>

void bubble_sort(std::vector<int>& a) {
  bool swapped;
  int n = a.size();
  do {
    swapped = false;
    for (int i = 1; i < n; i++) {
      if (a[i - 1] > a[i]) {
        std::swap(a[i - 1], a[i]);
        swapped = true;
      }
    }
    n--;
  }while (swapped);
}

void print_vector(const std::vector<int>& v) {
  for (int num : v) {
    std::cout << num << " ";
  }
    std::cout << std::endl;
}

int main() {
  std::vector<int> vec1 = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  std::vector<int> vec2 = {31, 2, 37, 19, 17, 5, 3, 29, 23, 13, 11, 7};

  std::cout << "Original vector 1: ";
  print_vector(vec1);

  std::cout << "Original vector 2: ";
  print_vector(vec2);

  // Sorting
  bubble_sort(vec1);
  bubble_sort(vec2);

  std::cout << "Sorted vector 1: ";
  print_vector(vec1);

  std::cout << "Sorted vector 2: ";
  print_vector(vec2);

  return 0;
}
