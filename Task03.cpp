#include <iostream>

int main()
{
	long long a;
	std::cin >> a;
	int sum = 0;
	int n = 1;
	while (a>0)
	{
		int digit = a % 10;
		sum = sum + digit *n ;
		a /= 10;
		n *= 2;;
	}
	std::cout << sum;
}
