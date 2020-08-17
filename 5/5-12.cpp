#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
	std::vector<int> ans{ 1,2,3,4 };
	std::vector<int> test;

	while (true)
	{
		int bull = 0, cow = 0;

		for (auto i = 0; i < 4; ++i)
		{
			int a = 0;
			std::cin >> a;
			test.push_back(a);
		}

		auto find1 = std::find(std::begin(ans), std::end(ans), test[0]);
		auto find2 = std::find(ans.begin(), ans.end(), test[1]);
		auto find3 = std::find(ans.begin(), ans.end(), test[2]);
		auto find4 = std::find(ans.begin(), ans.end(), test[3]);

		if (find1 != ans.end())
		{
			if (ans[0] == test[0])
				bull++;
			else
				cow++;
		}

		if (find2 != ans.end())
		{
			if (ans[1] == test[1])
				bull++;
			else
				cow++;
		}

		if (find3 != ans.end())
		{
			if (ans[2] == test[2])
				bull++;
			else
				cow++;
		}

		if (find4 != ans.end())
		{
			if (ans[3] == test[3])
				bull++;
			else
				cow++;
		}

		std::cout << "bull: " << bull << ", " << "cow :" << cow << '\n';

		if (bull == 4 && cow == 0)
			break;

		test.clear();
	}
}
