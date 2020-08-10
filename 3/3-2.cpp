#include <iostream>

int main()
{
	std::cout << "mile을 입력하세요 \n";
	double mile = 0.0;
	std::cin >> mile;
	std::cout << mile * 1.609 << "km";
}
