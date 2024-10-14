#include <iostream>
int main()
{
	double cheeseburger = 8.25;
	int fishMenu = 12;
	double chickenWings = 10.99;
	double discount = 0.1;
	double order;
	int cheeseValue, fishValue, chickenValue;
	int delivery = 5;
	std::cin >> cheeseValue >> fishValue >> chickenValue;
	order = (cheeseValue * cheeseburger) + (fishValue * fishMenu) + (chickenValue * chickenWings);
	do {
		order = order + discount * order;
		break;
	}while(order > 60);
	order += delivery;
	std::cout << order;
}