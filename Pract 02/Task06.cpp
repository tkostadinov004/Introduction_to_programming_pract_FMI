#include <iostream>

int main() {
	float cheesePrice = 8.25;
	short fishPrice = 12;
	float chickenPrice = 10.99;
	short delivery = 5;

	short cheeseNum, fishNum, chickenNum;
	std::cin >> cheeseNum >> fishNum >> chickenNum;

	float totalPrice = cheesePrice * cheeseNum + fishPrice * fishNum + chickenPrice * chickenNum;

	float dessert = totalPrice * 0.10 * (totalPrice > 60);

	totalPrice += dessert + delivery;

	std::cout << totalPrice;
}