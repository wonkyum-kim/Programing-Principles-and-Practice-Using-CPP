#include <iostream>

int main()
{
	int left = 1;
	int right = 101;
	char ch;
	while (left < right)
	{
		if (right - left == 1)
			break;
		int mid = (left + right) / 2;
		std::cout << "당신이 생각하는 숫자가 " << mid << "보다 작은가요?(y or n)\n";
		while (std::cin >> ch)
		{
			if (ch == 'y')
			{
				right = mid;
				break;
			}
			else if (ch == 'n')
			{
				left = mid;
				break;
			}
			else
				std::cout << "다시 입력하세요\n";
		}
	}
	std::cout << left;
}
