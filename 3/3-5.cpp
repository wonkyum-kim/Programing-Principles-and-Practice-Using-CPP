#include <iostream>
#include <algorithm>

int main()
{
	std::cout << "두 개의 부동소수점 값을 입력하세요\n";
	float val1 = 0;
	float val2 = 0;
	std::cin >> val1 >> val2;
	std::cout << "작은 값: " << std::min(val1, val2)
		<< "\n큰 값: " << std::max(val1, val2)
		<< "\n합: " << val1 + val2
		<< "\n차: " << val1 - val2
		<< "\n곱: " << val1 * val2
		<< "\n비율: " << (float)val1 / val2;
}
