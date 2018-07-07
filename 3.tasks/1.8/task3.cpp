#include <iostream>

int main()
{
  char c;
  int cc = 0;

  while (std::cin.get(c))
  {
    (c == ' ') ? (++cc) : (cc = 0);

    if (cc < 2)
      std::cout << c;
  }
  std::cout  << std::endl;
}
