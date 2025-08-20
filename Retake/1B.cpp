#include <iostream>

void flipLast4(unsigned& num)
{
	// 15u is in fact ((1 << 4) - 1)
	num ^= 15u;
}

// A more generalized approach that flips the last 'bitsCount' bits
void flipLastN(unsigned& num, unsigned bitsCount)
{
	num ^= ((1 << bitsCount) - 1);
}

int main()
{
	unsigned num;
	std::cin >> num;

	flipLast4(num);
	std::cout << num;
}