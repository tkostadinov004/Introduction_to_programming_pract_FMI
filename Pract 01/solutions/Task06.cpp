#include <iostream>

int main()
{
	unsigned long long pin;
	std::cin >> pin;

	std::cout << "*******" << pin % 1000;
}
