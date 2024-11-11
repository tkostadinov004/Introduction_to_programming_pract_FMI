#include <iostream>

unsigned reverseNum(unsigned num)
{
	unsigned result = 0;
	while (num > 0)
	{
		(result *= 10) += num % 10;
		num /= 10;
	}
	return result;
}
size_t countSuffixZeroes(unsigned num)
{
	if (num == 0)
	{
		return 1;
	}

	size_t count = 0;
	while (num % 10 == 0)
	{
		count++;
		num /= 10;
	}
	return count;
}
unsigned concatNumAtEnd(unsigned result, unsigned digit, size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		(result *= 10) += digit;
	}
	return result;
}
unsigned concatNumbers(unsigned first, unsigned second)
{
	size_t zeroesCount = countSuffixZeroes(second);

	unsigned reversedSecond = reverseNum(second);
	unsigned result = first;
	while (reversedSecond > 0)
	{
		(result *= 10) += reversedSecond % 10;
		reversedSecond /= 10;
	}
	return concatNumAtEnd(result, 0, zeroesCount);
}
unsigned concatWithReverse(unsigned num)
{
	unsigned reversed = reverseNum(num);
	return concatNumbers(reversed, num);
}
int main()
{
	
}