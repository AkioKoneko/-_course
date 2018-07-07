#include <iostream>
#include <cmath>

int main()
{
  double a,b,c,x,discr;
  std::cin >> a >> b >> c;
  discr=b*b -4*a*c;

  if (discr > 0)
  {
    x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
    std::cout << x << " ";
    x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
    std::cout << x << '\n';
  }
  else if (discr == 0)
  {
    x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
    std::cout << x << " " << x << '\n';
  }
  else std::cout << "No real roots" << '\n';
}
