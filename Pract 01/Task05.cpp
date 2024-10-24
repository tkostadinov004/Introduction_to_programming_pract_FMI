#include <iostream>

int main() {
	int num1, num2;
	std::cin >> num1 >> num2;

	std::cout << std::boolalpha << ((num1 % num2) == 0) << std::endl;
}