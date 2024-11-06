#include <iostream>

int main()
{
	size_t count;
	std::cin >> count;

	int min = INT_MAX, max = INT_MIN, sum = 0;
	for (size_t i = 0; i < count; i++)
	{
		int num;
		std::cin >> num;

		if (num < min)
		{
			min = num;
		}
		if (num > max)
		{
			max = num;
		}
		sum += num;
	}
	std::cout << min << " " << max << " " << (sum * 1.0 / count);
}