#include <iostream>

bool areDigitsSortedAscending(unsigned num)
{
	if (num < 10)
	{
		return true;
	}

	unsigned lastDigit = num % 10;
	num /= 10;
	while (num > 0)
	{
		if (num % 10 > lastDigit)
		{
			return false;
		}
		lastDigit = num % 10;
		num /= 10;
	}
	return true;
}
bool areDigitsSortedDescending(unsigned num)
{
	if (num < 10)
	{
		return true;
	}

	unsigned lastDigit = num % 10;
	num /= 10;
	while (num > 0)
	{
		if (num % 10 < lastDigit)
		{
			return false;
		}
		lastDigit = num % 10;
		num /= 10;
	}
	return true;
}
bool areDigitsSorted(unsigned num)
{
	return areDigitsSortedAscending(num) || areDigitsSortedDescending(num);
}
int main()
{
	
}