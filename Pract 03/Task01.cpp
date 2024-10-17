#include <iostream>

int main() {
	int num;
	std::cin >> num;

	if (num % 2 == 0) {
		std::cout << "Even" << std::endl;
	}
	else {
		std::cout << "Odd" << std::endl;
	}
}