#include <iostream>
#include <vector>
#include <string>
#include <numeric>

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

	int sum = std::accumulate(integers.begin(), integers.begin() + N, 0);
	std::cout << sum;
}
