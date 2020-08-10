#include <iostream>

int main()
{
	double a, b;
	char op;
	std::cin >> a >> b >> op;
	switch (op) {
	case '+':
		std::cout << a + b;
		break;
	case '-':
		std::cout << a - b;
		break;
	case '*':
		std::cout << a * b;
		break;
	case '/':
	{
		if (b == 0)
			std::cout << "0으로 나눌 수 없다.";
		else
			std::cout << a / b;
		break;
	}
	default:
		std::cout << "error";
		break;
	}
}
