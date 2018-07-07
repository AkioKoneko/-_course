#include <iostream>

int main()
{
  int count;
  std::cin >> count;
  for (size_t i = 0; i < count; ++i)
  {
    int a,b;
    std::cin >> a >> b;
    std::cout << a + b << '\n';
  }
}
//пишем идеальный код с сингалевичем, ага ага
