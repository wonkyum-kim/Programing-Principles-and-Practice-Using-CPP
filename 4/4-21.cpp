#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>

int main()
{
	std::vector<std::string> names;
	std::vector<int> numbers;

	std::string name;
	int num = 0;

	while (true)
	{
		std::cin >> name >> num;
		if (name == "quit" && num == 0)
			break;
		names.push_back(name);
		numbers.push_back(num);
	}

	std::vector<std::string> temp = names;
	std::sort(temp.begin(), temp.end());
	auto last = std::unique(temp.begin(), temp.end());
	temp.erase(last, temp.end());
	if (temp.size() != names.size())
	{
		std::cerr << "error : duplicated name";
		return EXIT_FAILURE;
	}
	/*
	for (auto i = 0; i < names.size(); ++i)
		std::cout << "name: " << names[i] << " " << "score: " << numbers[i] << '\n';
	*/

	std::cout << "input a score\n";

	int gg;
	std::cin >> gg;
	auto p = std::find(numbers.begin(), numbers.end(), gg);

	if (p == numbers.end())
	{
		std::cerr << "you can't find that score\n";
		return EXIT_FAILURE;
	}
	else
	{
		for (auto i = 0; i < numbers.size(); i++)
		{
			if (gg == numbers[i])
				std::cout << names[i] << '\n';
		}
	}
}
