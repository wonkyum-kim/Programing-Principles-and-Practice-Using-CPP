#include <iostream>
#include <string>

int main()
{
	std::cout << "성과 나이를 입력하세요\n";
	std::string first_name = "???";	// 문자열 변수
									// ("???"는 "이름을 모름"을 의미함)
	double age = -1;				// 정수 변수 (-1은 "나이를 모름"을 의미함)
	std::cin >> first_name >> age;	// 문자열을 읽은 후 정수를 읽음
	std::cout << "안녕하세요, " << first_name << " (나이 " << age * 12 << "개월)\n";
}
