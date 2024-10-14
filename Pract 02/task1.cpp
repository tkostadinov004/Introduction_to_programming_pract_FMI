#include <iostream>
int main()
{
	double a, b, c, d;
	std::cin >> a >> b >> c >> d;
	//z1*z2 = (a+bi)(c+di) = ac + adi + bci + bdi^2 = (ad + bc)i + (ac - bd)
	double realResult = (a * c) - (b * d);
	double imaginaryResult = (a * d) + (b * c);
	std::cout << realResult << "\t" << imaginaryResult << "i";
}