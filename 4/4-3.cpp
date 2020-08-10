#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
	std::vector<double> v;

	for (double temp; std::cin >> temp;)
		v.push_back(temp);

	double sum = std::accumulate(v.begin(), v.end(), 0);
	std::cout << "총 거리: " << sum << '\n';
	std::sort(v.begin(), v.end());
	std::cout << "최대 거리: " << v[v.size() - 1] << '\n';
	std::cout << "최소 거리: " << v[0] << '\n';
	std::cout << "평균 거리: " << sum / v.size() << '\n';
}
