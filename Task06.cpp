#include <iostream>

int main()
{
    int burgers, fishMenus, chickenWings;
    std::cin >> burgers >> fishMenus >> chickenWings;
    double sum = burgers * 8.25 + fishMenus * 12.00 + chickenWings * 10.99;
    sum = (sum > 60.00) * (sum * 0.10) + sum;
    sum += 5;
    std::cout << sum;
}
