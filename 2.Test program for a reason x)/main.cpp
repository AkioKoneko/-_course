#include <iostream>
#include <vector>

//bool max_element (std::vector<int>* p, std::vector<int>* q, int ** res)
bool max_element (int* p, int* q, int ** res)
{
  if (p == q)
    return false;

  *res = p;

  for (; p != q; ++p)
  {
    if (*p > **res)
      *res = p;
  }

  return true;
}

int main()
{
  int count;
  std::cin >> count;
  //std::vector<int> v(count);
  int v[count];

  for (size_t i = 0; i < count; ++i)
    std::cin >> v[i];

  int * pmax = 0;
  if (max_element (v, v + count, &pmax))
  {
    std::cout << "Maximum = " << *pmax << std::endl;
  }
}
