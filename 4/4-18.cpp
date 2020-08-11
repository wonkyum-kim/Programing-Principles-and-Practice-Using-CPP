#include <iostream>
#include <cmath>
#include <complex>

int main()
{
	double a = 0, b = 0, c = 0;

	std::cin >> a >> b >> c;
	std::complex<double> x1 = ((-b) + std::sqrt(std::complex<double>((b * b - 4 * a * c), 0))) / (2 * a);
	std::complex<double> x2 = ((-b) - std::sqrt(std::complex<double>((b * b - 4 * a * c), 0))) / (2 * a);

	std::cout << x1 << " " << x2;
}
