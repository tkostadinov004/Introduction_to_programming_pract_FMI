#include <iostream>

int main() {
	float a;
	float b;
	float c;

	std::cout << "Enter side a: ";
	std::cin >> a;

	std::cout << "Enter side b: ";
	std::cin >> b;

	std::cout << "Enter side c: ";
	std::cin >> c;

	float P = a + b + c;
	float semiP = P / 2.0;
	std::cout << "P =  " << P << std::endl;

	float S = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));
	std::cout << "S =  " << S;
}