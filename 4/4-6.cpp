#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::vector<std::string> v{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int a = 0;
	std::cin >> a;
	if (a >= 10 || a < 0)
		std::cout << "error";
	else
		std::cout << v[a];

	std::string s;
	std::cin >> s;
	auto iter = std::find(v.begin(), v.end(), s);
	if (iter != v.end())
		std::cout << std::distance(v.begin(), iter);
	else
		std::cout << "error";
}
