#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int max = INT_MIN;
	int min = INT_MAX;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		sum += a;
		if (a>max)
		{
			max = a;
		}
		if (a<min)
		{
			min = a;
		}
	}
	std::cout << "min = " << min << ", " << "max = " << max << ", " << "avg = " << sum / n;
}
