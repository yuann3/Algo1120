#include <iostream>

void FibonacciNumber(int limit)
{
  int f0 = 0;
  int f1 = 1;

  if (limit < 1)
    return ;

  while (f0 <= limit)
  {
    std::cout << f0 << std::endl;
    int next = f0 + f1;
    f0 = f1;
    f1 = next;
  }
}

int main()
{
  int limit;
  std::cout << "Enter a number: ";
  std::cin >> limit;
  FibonacciNumber(limit);
}
