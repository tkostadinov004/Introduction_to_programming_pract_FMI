#include <iostream>
int main()
{
	double a, b, c, d;
	std::cin >> a >> b >> c >> d;
	//z1/z2
	double real = (a * c + b * d) / (c * c + d * d);
	double imaginary = (b*c - a*d) / (c * c + d * d);
	std::cout << "real part: " << real << "  imaginary part: " << imaginary << "i";
}