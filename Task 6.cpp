#include <iostream>

int main()
{
	int cheeseburger;
	int fish_menu;
	int chiken_wings;

	std::cin >> cheeseburger >> fish_menu >> chiken_wings;

	double bill = (8.25 * cheeseburger + 12 * fish_menu + 10.99 * chiken_wings);
	double dessert = (bill > 60) * (bill * 0.10);
	double final_bill = bill + dessert + 5.00;

	std::cout << final_bill << '\n';

	return 0;
}