#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a % 2 == 0)
		std::cout << a << "은(는) 짝수 입니다.";
	else
		std::cout << a << "은(는) 홀수 입니다.";
}
