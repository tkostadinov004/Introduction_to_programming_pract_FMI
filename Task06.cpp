#include <iostream>
int f(int n) 
{
	int reversed = 0;
	int num = n;
	while (num > 0)
	{
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}
	return reversed;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << f(n) << n;
}
