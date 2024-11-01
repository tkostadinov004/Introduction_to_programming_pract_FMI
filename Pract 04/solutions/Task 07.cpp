#include <iostream>

int main()
{
	unsigned upperBound;
	std::cin >> upperBound;
	
	for (unsigned i = 101; i <= upperBound; i++)
	{
		bool isPrime = true;
		for (unsigned j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (!isPrime)
		{
			continue;
		}

		unsigned copyOfCurrent = i;
		unsigned digitSum = 0;
		while (copyOfCurrent > 0)
		{
			digitSum += copyOfCurrent % 10;
			copyOfCurrent /= 10;
		}
		if (digitSum < 10)
		{
			std::cout << i << " ";
		}
	}
}