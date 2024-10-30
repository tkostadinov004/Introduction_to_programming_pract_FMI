#include <iostream>

int main()
{
	unsigned n;
	std::cin >> n;

	bool isPrime = n >= 2;
	/* 
		If the type of i has a size equal to or greater than that of n, the condition should state
		i <= n / i, in order to prevent overflow
	*/
	for (size_t i = 2; i * i <= n; i++) 
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	std::cout << (isPrime ? "Prime" : "Not prime");
}
