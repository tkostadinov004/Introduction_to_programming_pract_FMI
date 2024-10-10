#include <iostream>

int main()
{
	int a;
	
	std::cin >> a;
	
	int first = a / 1000;
	int second = (a / 100) % 10;
	int third = (a / 10) % 10;
	int fourth = a % 10;

	if (first == fourth && second == third) {
		
		std::cout << "1";
	}
	else {
		std::cout << "0";
	}

	return 0;
}