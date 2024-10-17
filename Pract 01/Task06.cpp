#include <iostream>

int main() {
	std::string id;
	std::cin >> id;

	for (int i = 0; i < 7; i++) {
		id[i] = '*';
	}
	std::cout << id;
}