#include <iostream>

int main()
{
	int a, b, c, d;

	std::cin >> a >> b >> c >> d;

	double denom = (c * c + d * d) * 1.00;

	double ReResult = (a * c + b * d) / denom;
	double ImResult = (b * c - a * d) / denom;

	std::cout << ReResult << "+" << ImResult << "i";

	return 0;
}