#include <iostream>
#include <string>
int main()
{
	long long id = 0;
	std::cout << "input 10 numbered id: ";
	std::cin >> id;
	if (id < 1000000000 || id>9999999999) {
		std::cout << "your id is invalid";
	}
	else {
		std::string idString = std::to_string(id);
		for (int i = 0; i < 7; i++) {
			idString[i] = '*';
		}
		std::cout << idString;
	}
}