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

unsigned gcdOf4Numbers(unsigned a, unsigned b, unsigned c, unsigned d) {
	return gcd(gcd(a, b), gcd(c, d));
}

unsigned nok(unsigned a, unsigned b) {
	return (a * b) / gcd(a, b);
}

unsigned nokOf4Numbers(unsigned a, unsigned b, unsigned c, unsigned d) {
	return nok(a, nok(b, nok(c, d)));
}

int main() {
	std::cout << nokOf4Numbers(15, 75, 30, 40);
}
