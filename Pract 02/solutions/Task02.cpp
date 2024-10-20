#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	double denominator = c * c + d * d;
	double real = (a * c + b * d) / denominator;
	double imaginary = (b * c - a * d) / denominator;

	std::cout << real << " + " << imaginary << "i";
}