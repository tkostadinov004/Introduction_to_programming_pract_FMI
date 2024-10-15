#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	int c, d;
	std::cin >> c >> d;

	if (b >= c) {
		std::cout << 1;
	}
	else {
		std::cout << 0;
	}
}