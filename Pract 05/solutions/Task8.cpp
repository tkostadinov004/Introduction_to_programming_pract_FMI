#include <iostream>

unsigned removeHundreds(unsigned num)
{
	unsigned thousands = num / 1000;
	unsigned remaining = num % 100;
	return thousands * 100 + remaining;
}
bool isDivisibleWithoutHundreds(unsigned num, unsigned divisor)
{
	return removeHundreds(num) % divisor == 0;
}
void printDivisibles(unsigned lowerBound, unsigned upperBound)
{
	for (size_t i = lowerBound; i <= upperBound; i++)
	{
		if (isDivisibleWithoutHundreds(i, 11))
		{
			std::cout << i << " ";
		}
	}
}
int main()
{
	
}