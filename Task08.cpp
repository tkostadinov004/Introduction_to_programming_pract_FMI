#include <iostream>
int BiggestSumOfDigits(int n) {
	int count = 0;
	int biggestCount = 0;
	int biggestNum = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		std::cin >> a;
		int aCopy = a;
		while (aCopy > 0)
		{
			int digit = aCopy % 10;
			count += digit;
			aCopy /= 10;
		}
		if (biggestCount < count)
		{
			biggestCount = count;
			biggestNum = a;
		}
		count = 0;
	}
	return biggestNum;
}
int main()
{
	int n;
	std::cin >> n;
	int biggestNum = BiggestSumOfDigits(n);
	std::cout << biggestNum;
}
