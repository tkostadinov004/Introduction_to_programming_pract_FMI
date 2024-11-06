#include <iostream>

int main()
{
	size_t digitsCount;
	std::cin >> digitsCount;

	unsigned result = 0;
	for (size_t i = 0; i < digitsCount; i++)
	{
		unsigned currentDigit;
		std::cin >> currentDigit;

		if (currentDigit % 2 == 0)
		{
			result = result * 10 + currentDigit; // also: (result *= 10) += currentDigit;
		}
	}
	std::cout << result;
}