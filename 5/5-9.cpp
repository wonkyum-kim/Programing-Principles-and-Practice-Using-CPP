#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <limits>

int main()
{
	int N = 0;
	while (true)
	{
		std::cout << "input a number to sum ";
		std::cin >> N;
		if (N < 0)
			std::cout << "you have to input a number over 0";
		else
			break;
	}

	std::cout << "input some integers\n";

	std::string input;
	std::vector<int> integers;

	while (std::cin >> input)
	{
		if (input == "|")
			break;
		else
		{
			int num = std::stoi(input);
			integers.push_back(num);
		}
	}

	if (integers.size() < N)
	{
		std::cerr << "you can't get a sum of integers";
		return EXIT_FAILURE;
	}

	auto sum = std::accumulate(integers.begin(), integers.begin() + N, 0);
	if (sum > std::numeric_limits<int>::max())
	{
		std::cerr << "you can't get a sum of int type";
		return EXIT_FAILURE;
	}
	else
		std::cout << sum;
}
