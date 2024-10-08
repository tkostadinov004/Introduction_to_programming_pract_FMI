#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << std::boolalpha << !(a % b);
}

