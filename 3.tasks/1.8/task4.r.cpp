#include <iostream>

int log (int a)
{
  if (a <= 1) return 0;
  else return 1 + log (a / 2);
}

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
