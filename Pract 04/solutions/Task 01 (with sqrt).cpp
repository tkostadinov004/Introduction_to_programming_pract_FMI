#include <iostream>

int main()
{
	unsigned n;
	std::cin >> n;

	bool isPrime = n >= 2;
	
	unsigned root = sqrt(n);
	for (size_t i = 2; i <= root; i++) 
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	std::cout << (isPrime ? "Prime" : "Not prime");
}