#include <iostream>
#include <stdexcept>

constexpr double ctok(const double c)
{
	double k = c + 273.15;
	if (c < -273.15)
		throw std::runtime_error{ "invalid temperature" };
	else
		return k;
}

constexpr double ktoc(const double k)
{
	double c = k - 273.15;
	if (c < -273.15)
		throw std::runtime_error{ "invalid temperature" };
	else
		return c;
}

int main()
{
	double c = 0;
	std::cin >> c;
	double k = ctok(c);
	std::cout << k << '\n';
	double cc = ktoc(k);
	std::cout << cc;
}
