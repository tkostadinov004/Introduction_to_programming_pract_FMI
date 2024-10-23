#include <iostream>
int main()
{
	char symbul;
	std::cin >> symbul;

	if (symbul >= 65 && symbul <= 90) {
		std::cout << "uppercase letter";
	}
	else if (symbul >= 97 && symbul <= 122) {
		std::cout << "lowercase letter";

	}
	else if (symbul >= 48 && symbul <= 57) {
		std::cout << "digit";

	}
	else {
		std::cout << "other";

	}
	return 0;

}