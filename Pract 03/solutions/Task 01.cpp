#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	std::cout << (n % 2 == 0 ? "Even" : "Odd");
}