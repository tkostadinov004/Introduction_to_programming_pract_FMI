#include <iostream>

bool isDigitSumLessThan10(unsigned num)
{
	unsigned sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum < 10;
}
bool isPrime(unsigned num)
{
	if (num < 2)
	{
		return false;
	}
	
	unsigned root = sqrt(num);
	for (size_t i = 2; i <= root; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
void printNumbers(unsigned upperBound)
{
	for (size_t i = 100; i <= upperBound; i++)
	{
		if (isDigitSumLessThan10(i) && isPrime(i))
		{
			std::cout << i << " ";
		}
	}
}

int main()
{
	printNumbers(510);
}