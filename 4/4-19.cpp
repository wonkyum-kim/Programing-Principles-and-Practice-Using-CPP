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
	int age = 0;

	while (true)
	{
		std::cin >> name >> age;
		if (!std::cin)
			break;
		names.push_back(name);
		numbers.push_back(age);
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
	for (auto i = 0; i < names.size(); ++i)
		std::cout << "name: " << names[i] << " " << "age: " << numbers[i] << '\n';
}
