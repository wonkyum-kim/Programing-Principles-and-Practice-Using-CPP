#include <iostream>
#include <stdexcept>

constexpr double ctok(const double c)
{
	double k = c + 273.15;
	return k;
}

int main()
{
	double c = 0;
	std::cin >> c;
	if (c < -273.15)
		throw std::runtime_error{ "invalid temperature" };
	double k = ctok(c);
	std::cout << k;
}
