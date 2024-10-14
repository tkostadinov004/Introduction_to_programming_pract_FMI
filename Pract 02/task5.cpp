#include <iostream>
int main()
{
	int number, reverseNumber = 0, originalNumber;
	std::cin >> number;
	originalNumber = number;
	while (number > 0) {
		int digit = number % 10;
		reverseNumber = reverseNumber * 10 + digit;
		number = number / 10;
	}
	if (reverseNumber == originalNumber) {
		std::cout << "its a palindrome";
	}
	else {
		std::cout << "its not a palindrome";
	}
}