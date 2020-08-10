#include <iostream>
#include <string>

int main()
{
	int a, b, c, d, e, f;
	std::cout << "몇 페니를 가지고 계세요?\n";
	std::cin >> a;
	std::cout << "몇 니켈을 가지고 계세요?\n";
	std::cin >> b;
	std::cout << "몇 다임을 가지고 계세요?\n";
	std::cin >> c;
	std::cout << "몇 쿼터를 가지고 계세요?\n";
	std::cin >> d;
	std::cout << "몇 하프달러를 가지고 계세요?\n";
	std::cin >> e;
	std::cout << "몇 달러 가지고 계세요?\n";
	std::cin >> f;

	double sum = a + 5 * b + 10 * c + 25 * d + 50 * e + 100 * f;

	if (a != 1 && a != 0)
		std::cout << "You have " << a << " pennies\n";
	else
		std::cout << "You have " << a << " penny\n";

	if (a != 1 && a != 0)
		std::cout << "You have " << b << " nickels\n";
	else
		std::cout << "You have " << b << " nickel\n";

	if (a != 1 && a != 0)
		std::cout << "You have " << c << " dimes\n";
	else
		std::cout << "You have " << c << " dime\n";

	if (a != 1 && a != 0)
		std::cout << "You have " << d << " quarters\n";
	else
		std::cout << "You have " << d << " quarter\n";

	if (a != 1 && a != 0)
		std::cout << "You have " << e << " half dollars\n";
	else
		std::cout << "You have " << e << " half dollar\n";

	if (a != 1 && a != 0)
		std::cout << "You have " << f << " dollars\n";
	else
		std::cout << "You have " << f << " dollar\n";

	std::cout << "The value of all of your coins is $" << sum / 100;
}
