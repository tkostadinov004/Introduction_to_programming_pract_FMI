#include <iostream>

unsigned fastPow(unsigned num, unsigned base)
{
	unsigned result = 1;
	while (base > 0)
	{
		if (base % 2 == 0)
		{
			num *= num;
			base /= 2;
		}
		else
		{
			result *= num;
			base--;
		}
	}
	return result;
}
int main()
{
	
}