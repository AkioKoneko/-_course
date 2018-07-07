#include <iostream>

unsigned gcd(unsigned a, unsigned b)
{
  int a1 = (a > b ? a : b);
  int b2 = (a > b ? b : a);
  int mod = a1 % b2;
  a1 = mod;

  if (mod == 0)
    return b2;
  return gcd (a1, b2);
}

/*
А тут я засуну крутое и красивое решение в одну строчку, не то шо у меня !

unsigned gcd(unsigned a, unsigned b)
{
  return b ? gcd(b , a % b) : a;
}
*/

int main()
{
  int a, b;
  std::cin >> a >> b;

  std::cout << gcd (a, b) << '\n';
}
