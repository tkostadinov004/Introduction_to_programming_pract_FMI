#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	bool res = false;
	
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;

		if (num % 2 == 0) {
			!res ? res = true : res;
			std::cout << num;
		}
	}
	std::cout << (!res ? '0' : ' ');
}
