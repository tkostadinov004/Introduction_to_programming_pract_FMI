#include <iostream>

unsigned countOccurrences(unsigned number, unsigned digit) 
{
	if (number == 0) 
	{
		return digit == 0;
	}

	unsigned occs = 0;
	while (number > 0)
	{
		if (number % 10 == digit)
		{
			occs++;
		}
		number /= 10;
	}
	return occs;
}

unsigned countPairs(unsigned first, unsigned second) 
{
	unsigned pairsCount = 0;
	for (unsigned currentDigit = 0; currentDigit <= 9; currentDigit++)
	{
		unsigned occurrencesInFirst = countOccurrences(first, currentDigit);
		unsigned occurrencesInSecond = countOccurrences(second, currentDigit);

		pairsCount += occurrencesInFirst * occurrencesInSecond;
	}

	return pairsCount;
}

int main()
{
	unsigned a, b;
	std::cin >> a >> b;

	std::cout << countPairs(a, b);
}