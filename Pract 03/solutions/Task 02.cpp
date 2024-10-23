#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	char op;
	std::cin >> op;

	switch (op)
	{
	case '+':
		std::cout << a + b;
		break;
	case '-':
		std::cout << a - b;
		break;
	case '*':
		std::cout << a * b;
		break;
	case '/':
		std::cout << a * 1.0 / b;
		break;
	default:
		std::cout << "Invalid operator!";
		break;
	}
}