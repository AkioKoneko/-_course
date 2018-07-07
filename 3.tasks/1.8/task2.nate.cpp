#include <cmath>
#include <iostream>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;
	auto d = (b * b - 4 * a * c);

	if (d >= 0)
	{
		b = -b;
		a *= 2;

		auto x = (b + std::sqrt(d)) / a;
		std::cout << x << " ";

		if (d != 0)
			x = (b - std::sqrt(d)) / a;

		std::cout << x << '\n';
	}
	else std::cout << "No real roots" << '\n';
}
