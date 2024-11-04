#include <iostream>
bool AreDigitsSortedD(int n) {
	int previousDigit = -1;
	while (n>0)
	{
		int currentDigit = n % 10;
		if (currentDigit>previousDigit)
		{
			previousDigit = currentDigit;
		}
		else
		{
			return false;
		}
		n /= 10;
	}
	return true;
}
bool AreDigitsSortedA(int n) {
	int previousDigit = 10;
	while (n>0)
	{
		int currentDigit = n % 10;
		if (currentDigit<previousDigit)
		{
			previousDigit = currentDigit;
		}
		else
		{
			return false;
		}
		n /= 10;
	}
	return true;
}
bool AreDigitsSorted(int n) {
	return AreDigitsSortedA(n) || AreDigitsSortedD(n);
}
int main()
{
	int n;
	std::cin >> n;
	if (AreDigitsSorted(n))
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
