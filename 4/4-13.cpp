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
	std::vector<int> primes;
	for (auto i = 1; i <= 100; ++i)
	{
		if (is_prime(i))
			primes.push_back(i);
	}
	
	for (auto x : primes)
		std::cout << x << " ";
}
