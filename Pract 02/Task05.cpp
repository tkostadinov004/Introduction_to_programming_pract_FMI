#include <iostream>

int main() {
	int num;
	std::cin >> num;

	int fourthNum = num % 10;
	num /= 10;
	int thirdNum = num % 10;
	num /= 10;
	int secondNum = num % 10;
	num /= 10;
	int firstNum = num % 10;
	num /= 10;
	
	std::cout << (bool)(firstNum == fourthNum && secondNum == thirdNum) << std::endl;
}