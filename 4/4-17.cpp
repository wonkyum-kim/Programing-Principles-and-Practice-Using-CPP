#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
	std::vector<std::string> v;
	for (std::string i; std::cin >> i;)
		v.push_back(i);
	std::sort(v.begin(), v.end());
	std::cout << "max value: " << v.back() << '\n';
	std::cout << "min value: " << v.front() << '\n';

	std::string mode; 
	int temp = 1, max_temp = 0;

	for (auto i = 1; i < v.size(); ++i)
	{
		if (v[i] == v[i - 1])
			temp++;
		else
			temp = 1;

		if (max_temp < temp)
		{
			max_temp = temp;
			mode = v[i];
		}
	}
	std::cout << "mode value: " << mode;
}
