#include <iostream>
#include <vector>

void rotate (std::vector<int> &a, unsigned count, int shift)
{
  for (size_t i = 0; i < shift; ++i)
  {
    auto b = a[0];

    for (size_t j = 0; j < (count - 1); ++j)
      a[j]=a[j + 1];

    a[count - 1] = b;
  }
}

int main()
{
  int count;
  std::cin >> count;
  std::vector<int> a(count);

  int shift = 0;
  std::cin >> shift;

  for (size_t i = 0; i < count; ++i)
    std::cin >> a[i];

  rotate(a, count, shift);

  for (size_t i = 0; i < count; ++i)
    std::cout << a[i] << ' ';

  std::cout << std::endl;
}
