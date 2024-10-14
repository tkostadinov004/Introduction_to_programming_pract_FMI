
#include <iostream>

int main()
{

	int re1, im1, re2, im2;
	std::cout << "Enter two real and iamginary parts: ";
	std::cin >> re1 >> im1 >> re2 >> im2;
	//(re1 + im1) * (re2 + im2)

	int reResult = (re1 * re2 - im1 * im2);
	int imResult = (re1 * im2 + re2 * im1);

	std::cout << reResult << " + (" << imResult << "i)";
	


}

