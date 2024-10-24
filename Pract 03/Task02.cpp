#include <iostream>

int main() {
	int num1, num2;
	std::cin >> num1 >> num2;

	char operation;
	std::cin >> operation;

	switch (operation) {
	case '+':
		std::cout << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 * num2 << std::endl;
		break;
	case '/':
		std::cout << num1 / (float)num2 << std::endl;
	default:
		break;
	}
}