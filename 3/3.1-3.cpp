#include <iostream>
#include <string>

int main()
{
	std::string previous = " ";
	std::string current;
	while (std::cin >> current)
	{
		if (previous == current)
			std::cout << "반복된 단어: " << current << '\n';
		previous = current;
	}
}
