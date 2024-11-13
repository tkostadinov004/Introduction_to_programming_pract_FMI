#include <iostream>

size_t countDigitOccurrences(unsigned num, unsigned digit)
{
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
unsigned concatDigitAtBack(unsigned num, unsigned digit)
{
	return num * 10 + digit;
}
unsigned concatCountDigitsAtBack(unsigned num, unsigned digit, size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		num = concatDigitAtBack(num, digit);
	}
	return num;
}
unsigned sortNumber(unsigned num)
{
	unsigned result = 0;
	for (int i = 9; i >= 0; i--)
	{
		size_t digitCount = countDigitOccurrences(num, i);
		result = concatCountDigitsAtBack(result, i, digitCount);
	}
	return result;
}
int main()
{
	
}