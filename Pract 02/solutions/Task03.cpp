#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	std::cout << n % 10;

	/*
		Another, more complicated way:
		std::cout << ((n < 10) * n) + ((n >= 10) * (n % 10));
	*/
}