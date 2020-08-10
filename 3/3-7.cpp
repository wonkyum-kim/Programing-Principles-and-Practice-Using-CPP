#include <iostream>
#include <algorithm>
#include <array>

int main()
{
	std::array<std::string, 3> a;
	std::string a1, a2, a3;
	std::cin >> a1 >> a2 >> a3;
	a[0] = a1;
	a[1] = a2;
	a[2] = a3;
	std::sort(a.begin(), a.end());
	std::cout << a[0] << ", " << a[1] << ", " << a[2];
}
