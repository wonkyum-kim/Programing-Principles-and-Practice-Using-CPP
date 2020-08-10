#include <iostream>
#include <cmath>

// 간단한 연산자 실습용 프로그램
int main()
{
	std::cout << "부동소수점 값 입력: ";
	int n;
	std::cin >> n;
	double d = n;
	std::cout << "n == " << n 
            << "\nn+1 == " << n + 1 
            << "\n3 곱하기 n == " << 3 * n 
            << "\nn의 두 배 == " << n + n 
            << "\nn 제곱 == " << n * n 
            << "\nn 나누기 2 == " << n / 2 
            << "\nn의 제곱근 == " << std::sqrt(d) 
            << '\n';
}
