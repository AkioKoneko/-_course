#include <iostream>

void revers()
{
  int a;
  std::cin >> a;

  if (a == '\0') return;
  revers();

  std::cout << a << " ";
}

int main()
{
  revers();
}
