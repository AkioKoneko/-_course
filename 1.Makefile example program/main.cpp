#include <iostream>
#include "log.hpp"

int main()
{
  int count;
  std::cin >> count;

  while (count--)
  {
    int a;
    std::cin >> a;
    std::cout << log (a) << '\n';
  }
}
