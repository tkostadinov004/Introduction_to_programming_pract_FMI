#include <iostream>

int main()
{
	int a, b, c, d;
	

	std::cin >> a >> b >> c >> d;

    int ReResult = (a * c - b * d);
	int ImResult = (a * d + b * c);
	
	std::cout << ReResult << "+" << ImResult << "i";

	return 0;
}