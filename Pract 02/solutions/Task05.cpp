#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	bool isPalindrome = (n / 1000) == (n % 10) && (n / 10 % 10) == (n / 100 % 10);
	std::cout << isPalindrome;
}