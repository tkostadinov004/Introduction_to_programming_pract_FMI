#include <iostream>
bool IsPalindrom(int n) {
	int reversedNum = 0;
	int num = n;
	while (num > 0)
	{
		int digit = num % 10;
		reversedNum = reversedNum * 10 + digit;
		num /= 10;
	}
	return reversedNum == n;
}
int main()
{
	int n;
	std::cin >> n;
	if (IsPalindrom(n))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
