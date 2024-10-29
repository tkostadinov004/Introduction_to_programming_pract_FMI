#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	bool is_prime = true;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			is_prime = false;
			break;
		}
	}
	std::cout << (is_prime ? "prime" : "not prime");
}
