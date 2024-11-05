#include <iostream>

int main()
{
	unsigned num;
	std::cin >> num;

	unsigned maxOccurrences = 0, maxOccurringDigit = 0;
	for (int i = 9; i >= 0; i--)
	{
		unsigned copyOfNum = num;
		unsigned occurrencesOfDigit = 0;
		while (copyOfNum > 0)
		{
			if (copyOfNum % 10 == i)
			{
				occurrencesOfDigit++;
			}
			copyOfNum /= 10;
		}

		if (occurrencesOfDigit > maxOccurrences)
		{
			maxOccurrences = occurrencesOfDigit;
			maxOccurringDigit = i;
		}
	}
	std::cout << maxOccurringDigit;
}