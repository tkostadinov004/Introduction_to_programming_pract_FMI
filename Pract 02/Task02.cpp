#include <iostream>
#include <cmath>
int main()
{
	double re1, im1, re2, im2;
	std::cout << "Enter two real and imaginary parts: ";
	std::cin >> re1 >> im1 >> re2 >> im2;

	int denominator = re2 * re2 + im2 * im2;
	double reResult = (re1 * re2 + im1 * im2) / denominator;
	double imResult = (re2 * im1 - re1 * im2) / denominator;
	
	
		std::cout << reResult << " + (" << imResult << "i)";
	
	
}
