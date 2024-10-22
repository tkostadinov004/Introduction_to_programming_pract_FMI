
#include <iostream>

int main()
{
	double a;
	double b;
	char opp;

	std::cin >> a >> b >> opp;

	switch (opp)
	{
	case '+': std::cout << (a + b); break;
	case '-': std::cout << (a - b); break;
	case '*': std::cout << (a * b); break;
	case '/': std::cout << (a / b); break;
	default: std::cout << "invalid operator";  break;
	}
}