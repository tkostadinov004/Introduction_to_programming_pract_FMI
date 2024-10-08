#include <iostream>
int main()
{
	int a = 1;
	int b = 1;
	std::cin >> a;
	std::cin >> b;
	std::cout << std::boolalpha << (a % b == 0) << std::endl;
}
