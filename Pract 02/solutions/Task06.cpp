#include <iostream>

int main()
{
    int burgersCount, fishMenusCount, chickenCount;
    std::cin >> burgersCount >> fishMenusCount >> chickenCount;

    const float BURGER_PRICE = 8.25;
    const float FISH_MENU_PRICE = 12;
    const float CHICKEN_PRICE = 10.99;
    const float DELIVERY_FEE = 5;

    float orderPrice = burgersCount * BURGER_PRICE + fishMenusCount * FISH_MENU_PRICE + chickenCount * CHICKEN_PRICE;
    bool isThereDessert = orderPrice > 60;

    orderPrice += (isThereDessert * 0.1 * orderPrice) + DELIVERY_FEE;

    std::cout << orderPrice;
}