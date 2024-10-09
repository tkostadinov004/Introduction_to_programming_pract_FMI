#include <iostream>

int main()
{
	/*
	*1
	double a1, b1, a2, b2;
	std::cin >> a1 >> b1 >> a2 >> b2;
	std::cout << (a1 * a2 - b1 * b2) << " + " // Re(z)
		<< (a1 * b2 + b1 * a2) << "i"; // Im(z)
	*/

	/*
	* 2
	double a1, b1, a2, b2;
	std::cin >> a1 >> b1 >> a2 >> b2;

	double divisor = a2 * a2 + b2 * b2;
	std::cout << (a1 * a2 + b1 * b2) / divisor << " + " // Re(z)
		<< (a1 * b2 - b1 * a2) / divisor << "i"; // Im(z)
	*/

	/*
	* 3
	int num;
	std::cin >> num;
	std::cout << num % 10;
	*/

	/*
	* 4
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << ((c >= a && c <= b)
		|| (d >= a && d <= b));
	*/

	/*
	* 5
	int num;
	std::cin >> num;
	std::cout << ((num / 1000 == num % 10)
		&& (((num / 100) % 10) == (num / 10) % 10));
	*/

	/*
	* 6
	*/
	const double CB_PRICE = 8.25;
	const double FISH_PRICE = 12;
	const double CW_PRICE = 10.99;
	const double DELIVERY_PRICE = 5;
	const double DESSERT_CONDITION = 60;

	int cbCount, fishCount, cwCount;

	std::cin >> cbCount >> fishCount >> cwCount;

	double total = cbCount * CB_PRICE
		+ fishCount * FISH_PRICE
		+ cwCount * CW_PRICE;

	int dessertCoef = total >= DESSERT_CONDITION;

	total += DELIVERY_PRICE
		+ (dessertCoef * 0.1 * total);

	std::cout << dessertCoef << std::endl;
	std::cout << total << std::endl;
}