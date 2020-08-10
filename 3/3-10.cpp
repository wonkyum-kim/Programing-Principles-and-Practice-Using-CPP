#include <iostream>
#include <string>

int main()
{
	std::string operation;
	auto a = 0.0;
	auto b = 0.0;
	std::cin >> operation >> a >> b;
	if (operation == "+" || operation == "plus")
		std::cout << a + b;
	else if (operation == "-" || operation == "minus")
		std::cout << a - b;
	else if (operation == "*" || operation == "mul")
		std::cout << a * b;
	else if (operation == "/" || operation == "div")
		std::cout << a / b;
	else
		std::cout << "잘못된 연산자";
}
