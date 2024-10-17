#include <iostream>

int main() {
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	int re = a * c - b * d;
	int im = a * d + b * c;

	std::cout << re << " + " << im << "i";
}