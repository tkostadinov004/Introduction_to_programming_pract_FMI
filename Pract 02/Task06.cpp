
#include <iostream>


int main()

{

    int burgers, fishMenus, wings;
    std::cin >> burgers >> fishMenus >> wings;

    double total = burgers * 8.25 + fishMenus * 12 + wings * 10.99;
    double dessert = total * 0.1 * (total > 60);
    total += dessert + 5;

    std::cout << total << std::endl;
   
}


