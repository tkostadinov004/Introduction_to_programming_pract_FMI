#include <iostream>
bool checkPalindrome(int number) {
	int reverseNumber = 0, originalNumber;
	originalNumber = number;
	while (number > 0) {
		int digit = number % 10;
		reverseNumber = reverseNumber * 10 + digit;
		number = number / 10;
	}
	return (reverseNumber == originalNumber);
		
}
int main()
{
	int number;
	std::cin >> number;
	std::cout << (checkPalindrome(number) ? "true" : "false");
}