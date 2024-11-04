#include <iostream>
bool IsPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i==0)
		{
			return false;
		}
	}
	return true;
}
bool IsSumLessThan10(int n) {
	int sum = 0;
	while (n>0)
	{
		int digit = n % 10;
		sum = sum + digit;
		n /= 10;
	}
	return sum < 10;
}
void AllNumbers(int n) {
	for (int i = 100; i <= n; i++)
	{
		if (IsPrime(i)&&IsSumLessThan10(i))
		{
			std::cout << i << " ";
		}
	}
}
int main()
{
	int n;
	std::cin>>n;
	AllNumbers(n);
}
