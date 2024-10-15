#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int result = (a >= 10) * (a % 10) + a * (a < 10);
	std::cout << result;
}
