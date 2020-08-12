#include <iostream>
#include <stdexcept>

constexpr double ctof(const double c)
{
	double f = 9.0 / 5 * c + 32;
	return f;
}

constexpr double ftoc(const double f)
{
	double c = 5.0 / 9 * (f - 32);
	return c;
}

int main()
{
	double c = 0;
	std::cin >> c;
	std::cout << ctof(c);
}
