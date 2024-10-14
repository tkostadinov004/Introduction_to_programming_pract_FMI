#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	if (a > -10 && a < 10) {
		std::cout << a;
	}
	else {
		int b = a % 10;
		std::cout << b;
	}
}