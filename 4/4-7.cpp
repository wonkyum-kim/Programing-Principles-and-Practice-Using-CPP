#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

int main()
{
	std::vector<std::string> v{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	std::string num1, num2;
	char op;
	int n1 = 0, n2 = 0;
	
	std::cin >> num1 >> num2 >> op;
	auto p = std::find(v.begin(), v.end(), num1);
	auto q = std::find(v.begin(), v.end(), num2);

	if (p != v.end())
		n1 = std::distance(v.begin(), p);
	else if (num1[0] >= '0' && num1[0] <= '9')
		n1 = num1[0] - '0';
	else
	{
		std::cerr << "You should input a number from 0 to 9\n";
		return EXIT_FAILURE;
	}
	
	if (q != v.end())
		n2 = std::distance(v.begin(), q);
	else if (num2[0] >= '0' && num2[0] <= '9')
		n2 = num2[0] - '0';
	else
	{
		std::cerr << "You should input a number from 0 to 9\n";
		return EXIT_FAILURE;
	}

	switch (op) {
	case '+':
		std::cout << n1 + n2;
		break;
	case '-':
		std::cout << n1 - n2;
		break;
	case '*':
		std::cout << n1 * n2;
		break;
	case '/':
	{
		if (n2 == 0)
		{
			std::cerr << "forbidden behavior\n";
			break;
		}
		else
			std::cout << n1 / n2;
		break;
	}
	default:
		std::cerr << "operation is not defined\n";
		break;
	}
}
