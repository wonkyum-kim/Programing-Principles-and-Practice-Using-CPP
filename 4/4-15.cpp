#include <iostream>
#include <vector>

bool is_prime(const int i)
{
	if (i == 1)
		return false;

	else if (i == 2)
		return true;

	for (auto j = 2; j * j <= i; ++j)
		if (i % j == 0)
			return false;

	return true;
}

int main()
{
	int max = 0;
	std::cin >> max;

	int n = 0;
	std::cin >> n;

	int count = 0;

	std::vector<int> primes;
	for (auto i = 1; i <= max; ++i)
	{
		if (is_prime(i))
		{
			if (count++ != n)
				primes.push_back(i);
			else
				break;
		}
	}
	
	for (auto x : primes)
		std::cout << x << " ";
}
