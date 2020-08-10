#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<double> temps;
	for (double temp; std::cin >> temp;)
		temps.push_back(temp);
	std::sort(temps.begin(), temps.end());
	if (temps.size() % 2 == 0)
		std::cout << "중앙값: " << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2;
	else
		std::cout << "중앙값: " << temps[temps.size() / 2];
}
