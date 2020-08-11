#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v;
	for (int i; std::cin >> i;)
		v.push_back(i);
	std::sort(v.begin(), v.end());
	std::cout << "max value: " << v.back() << '\n';
	std::cout << "min value: " << v.front() << '\n';

	int mode = 0, temp = 1, max_temp = 0;
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
