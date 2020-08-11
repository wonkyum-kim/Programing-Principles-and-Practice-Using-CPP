#include <cmath>
#include <iostream>

int main()
{
	int square = 0, rice = 0;
	while (true)
	{
		rice = std::pow(2, square);
		std::cout << "the square index: " << ++square << " rice to stack: " << rice << '\n';
		if (std::pow(2, square - 1) < 1'000 && std::pow(2, square) > 1'000)
			std::cout << "to give 1,000 rice grains " << square << " squares are needed\n";
		else if (std::pow(2, square - 1) < 1'000'000 && std::pow(2, square) > 1'000'000)
			std::cout << "to give 1,000,000 rice grains " << square << " squares are needed\n";
		else if (std::pow(2, square - 1) < 1'000'000'000 && std::pow(2, square) > 1'000'000'000)
		{
			std::cout << "to give 1,000,000,000 rice grains " << square << " squares are needed\n";
			break;
		}
	}
}
