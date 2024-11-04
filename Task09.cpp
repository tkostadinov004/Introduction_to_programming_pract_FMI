#include <iostream>
int MaxDigit(int n) {
	int maxDigit = 0;
	while (n > 0)
	{
		int digit = n % 10;
		if (digit > maxDigit)
		{
			maxDigit = digit;
		}
		n /= 10;
	}
	return maxDigit;
}
int SortedNum(int n, int maxDigit) {
	int sortedNum = 0;
	for (int i = maxDigit; i >= 0; i--)
	{
		int num = n;
		while (num > 0)
		{
			if (num % 10 == i)
			{
				sortedNum = sortedNum * 10 + i;
			}
			num /= 10;
		}
	}
	return sortedNum;
}
int main()
{
	int n;
	std::cin >> n;
	int maxDigit = MaxDigit(n);
	int sortedNum = SortedNum(n, maxDigit);
	std::cout << sortedNum;
}
