#include <iostream>

int main()
{
	unsigned binaryNum;
	std::cin >> binaryNum;

	unsigned result = 0;
	unsigned base = 1;
	while (binaryNum > 0)
	{
		result += binaryNum % 10 * base;
		base *= 2;
		binaryNum /= 10;
	}
	std::cout << result;
}