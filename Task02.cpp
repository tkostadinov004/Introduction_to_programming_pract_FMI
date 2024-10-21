#include <iostream>

int main()
{
	double a, b; 
	char symbol; 
	std::cin >> a >> b;
	if (symbol == '+')
	{
	    std:: cout << a + b;
	}
	else if (symbol == '-')
	{
        std:: cout << a - b;
	}
	else if (symbol == '*') 
	{
	    std:: cout << a * b;
	}
	else if (symbol == '/') 
	{
	    std:: cout << a / b;
	}
	else
	{
		std::cout << "wrong symbol";
	}

}
