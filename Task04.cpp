#include <iostream>

int main()
{
	long long n;
	std::cin >> n;
	int mostCommon = 0;
	int biggestNum = -1;
	for (int i = 0; i <= 9; i++)
	{
		long long num = n;
		int count = 0;
		while (num>0)
		{
			int digit = num % 10;
			if (digit == i)
			{
				count++;
			}
			num /= 10;
		}
		if (count > mostCommon || (count == mostCommon && i > biggestNum))
		{
			biggestNum = i;
			mostCommon = count;
		}
	}
	std::cout << biggestNum;
}
