#include <iostream>
size_t countDigitOccurrences(unsigned digit, unsigned num)
{
	if (num == 0 && digit == 0)
	{
		return 1;
	}

	size_t count = 0;
	while (num > 0)
	{
		if (num % 10 == digit)
		{
			count++;
		}
		num /= 10;
	}
	
	return count;
}
unsigned long long concatDigitAtBack(unsigned long long num, unsigned digit, size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		(num *= 10) += digit;
	}
	
	return num;
}
unsigned long long sortConcat(unsigned a, unsigned b)
{
	unsigned long long result = 0;
	for (int i = 9; i >= 0; i--)
	{
		size_t occurrencesInA = countDigitOccurrences(i, a);
		size_t occurrencesInB = countDigitOccurrences(i, b);
		result = concatDigitAtBack(result, i, occurrencesInA + occurrencesInB);
	}
	
	return result;
}
int main()
{
	unsigned a, b;
	std::cin >> a >> b;
	std::cout << sortConcat(a, b);
}
