#include <iostream>

int main() {
	float a, b, c, d;
	std::cin >> a >> b >> c >> d;

	float denominator = (c * c + d * d);
	float re = (a * c + b * d) / denominator;
	float im = (b * c - a * d) / denominator;

	std::cout << re << " + " << im << "i" << std::endl;
}