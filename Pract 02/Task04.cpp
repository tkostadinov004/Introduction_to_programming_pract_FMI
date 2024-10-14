#include <iostream>

int main()
{
	int a, b, c, d;
	std::cout << "Enter first interval [a; b]: " << "\n";
	std::cin >> a >> b;
	std::cout << "Enter second interval [c; d]: " << "\n";
	std::cin >> c >> d;

	std::cout << ((b < c || d < a) ? 0 : 1);
}

