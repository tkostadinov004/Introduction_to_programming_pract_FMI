#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
	if ((a>23||a<0)&&(b<0||b>59))
	{
		std::cout << "invalid input";
	}
	b += 15;
	if (b>59)
	{
		b -= 60;
		a++;
	}
	if (a>23)
	{
		a -= 24;
	}
	std::cout << (a<10 ? "0" : "") <<a << " " <<(b<10 ? "0" : "")<< b;
}
