#include <iostream>

unsigned gcd(unsigned a, unsigned b) {
	while (a != b) 
	{
		if (a > b) 
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

unsigned gcdof4numbers(unsigned a, unsigned b, unsigned c, unsigned d) {
	return gcd(gcd(a, b), gcd(c, d));
}

int main() {
	std::cout << gcdof4numbers(75, 15, 35, 40);
}
