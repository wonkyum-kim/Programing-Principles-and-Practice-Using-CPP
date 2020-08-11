#include <iostream>
#include <cmath>

int main()
{
	double a = 0, b = 0, c = 0;
	double x1 = 0, x2 = 0;

	std::cin >> a >> b >> c;
	x1 = ((-b) + std::sqrt(std::pow(b, 2) - 4 * a * c)) / 2 * a;
	x2 = ((-b) - std::sqrt(std::pow(b, 2) - 4 * a * c)) / 2 * a;

	std::cout << x1 << " " << x2;
}
