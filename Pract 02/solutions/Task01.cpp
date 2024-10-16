#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	
	int real = a * c - b * d;
	int imaginary = a * d + b * c;

	std::cout << real << " + " << imaginary << "i";
}