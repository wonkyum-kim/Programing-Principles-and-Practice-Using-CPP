#include <iostream>
#include <stdexcept>

int main()
{
	int a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;
	int x1 = 0, x2 = 0;
	double D = b * b - 4 * a * c;
	if (D < 0)
	{
		std::cerr << "real root(s) is(are) not defined";
		return EXIT_FAILURE;
	}
	else
	{
		x1 = (-b + std::sqrt(D)) / 2 * a;
		x2 = (-b - std::sqrt(D)) / 2 * a;
		if (x1 != x2)
			std::cout << x1 << ", " << x2;
		else
			std::cout << x1;
	}
}
