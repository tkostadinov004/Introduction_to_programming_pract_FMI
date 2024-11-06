#include <iostream>

int main()
{
	size_t numsCount;
	std::cin >> numsCount;

	int secondMax = INT_MIN, max = INT_MIN;
	for (size_t i = 0; i < numsCount; i++)
	{
		int num;
		std::cin >> num;
		if (num > max)
		{
			secondMax = max;
			max = num;
		}
		else if (num < max && num > secondMax)
		{
			secondMax = num;
		}
	}
	std::cout << max << " " << secondMax;
}