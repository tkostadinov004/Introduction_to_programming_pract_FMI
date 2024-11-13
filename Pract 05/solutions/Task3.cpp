#include <iostream>

unsigned getDivisorsSum(unsigned num)
{
	unsigned sum = 0;
	for (size_t i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
bool isPerfect(unsigned num)
{
	return getDivisorsSum(num) == num;
}

int main()
{
	
}