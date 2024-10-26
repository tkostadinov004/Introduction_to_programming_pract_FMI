
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	for (int i = 100; i <= n; i++)
	{
		int count = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i%j==0)
			{
				count++;
			}
		}
		int num = i;
		int sum = 0;
		while (num>0)
		{
			int digit = num % 10; 
			sum += digit;
			num /= 10;
		}
		if (sum<10&&count==2)
		{
			std::cout << i << " ";
		}
	}
}
