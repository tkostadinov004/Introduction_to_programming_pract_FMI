#include <iostream>

int main()
{
	char c;
	std::cin >> c;

	if (c >= 'a' && c <= 'z')
	{
		std::cout << "lowercase letter";
	}
	else if (c >= 'A' && c <= 'Z')
	{
		std::cout << "uppercase letter";
	}
	else if (c >= '0' && c <= '9')
	{
		std::cout << "digit";
	}
	else
	{
		std::cout << "other";
	}
}