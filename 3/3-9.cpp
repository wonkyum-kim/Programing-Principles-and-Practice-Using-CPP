#include <iostream>
#include <string>

int main()
{
	std::string a;
	std::cin >> a;
	if (a == "zero")
		std::cout << 0;
	else if (a == "one")
		std::cout << 1;
	else if (a == "two")
		std::cout << 2;
	else if (a == "three")
		std::cout << 3;
	else if (a == "four")
		std::cout << 4;
	else
		std::cout << "바보 같은 컴퓨터!";
}
