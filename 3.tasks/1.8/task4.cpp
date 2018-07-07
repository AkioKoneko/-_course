#include <iostream>

auto Log (int a)
{
  int count = 0;
  int p = 2;

  while (p <= a)
  {
    p = p * 2;
    ++count;
  }

  return count;
}

int main()
{
  int count;
  std::cin >> count;

  for (size_t i = 0; i < count; ++i)
  {
    int a;
    std::cin >> a;
    std::cout << Log (a) << '\n';
  }
}
