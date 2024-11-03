#include <iostream>

int reversedNumber(unsigned int number) {

	int reversedNumber = 0;

	while (number > 0) {

		reversedNumber *= 10;
		reversedNumber += number % 10;
		number /= 10;

	}

	return reversedNumber;

}

void isPalindrome(int number) {

	if (number == reversedNumber(number)) {

		std::cout << "It's a palindrome";
	}
	else {
		std::cout << "It's not a palindrome";
	}

}

int main()
{

	unsigned int number;

	std::cin >> number;

	isPalindrome(number);

}