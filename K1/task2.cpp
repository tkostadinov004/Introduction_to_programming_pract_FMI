#include <iostream>
size_t getDivisors(unsigned divisors[])
{
	size_t divisorsCount = 0;

	unsigned currentDivisor;
	std::cin >> currentDivisor;
	while (currentDivisor != 0)
	{
		divisors[divisorsCount++] = currentDivisor;
		std::cin >> currentDivisor;
	}
	
	return divisorsCount;
}
bool isNotDivisibleByAny(unsigned number, const unsigned divisors[], size_t divisorsCount)
{
	for (size_t i = 0; i < divisorsCount; i++)
	{
		if (number % divisors[i] == 0)
		{
			return false;
		}
	}
	
	return true;
}
void printValidNumbers(unsigned upperBound, const unsigned divisors[], size_t divisorsCount)
{
	for (size_t i = 1; i <= upperBound; i++)
	{
		if (isNotDivisibleByAny(i, divisors, divisorsCount))
		{
			std::cout << i << " ";
		}
	}
}
int main()
{
	unsigned upperBound;
	std::cin >> upperBound;
	constexpr size_t MAX_DIVISORS_COUNT = 64;
	unsigned divisors[MAX_DIVISORS_COUNT];
	size_t divisorsCount = getDivisors(divisors);
	printValidNumbers(upperBound, divisors, divisorsCount);
}
