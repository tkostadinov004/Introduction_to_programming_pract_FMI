#include <iostream>
#include <cmath>
int main()
{
    float cheeseburger = 8.25f;
    short fishMenu = 12;
    float chickenWings = 10.99f;
   
    //since the amount has no set boundaries int and double are prefered:
    int cheeseburgerAmount, fishMenuAmount, chickenWingsAmount;
    double currentPrice = 0;
    std::cout << "Enter the amount of wanted products: ";
    std::cin >> cheeseburgerAmount >> fishMenuAmount >> chickenWingsAmount;

    currentPrice = cheeseburger * cheeseburgerAmount + fishMenu * fishMenuAmount 
        + chickenWings * chickenWingsAmount; 
    
    //didn't quite catch if the price should be > or >= 60
    int dessert = (60 - (int)currentPrice) >> 31; // if sum > 60 = -1 if sum < 60 = 0
    double fullPrice = currentPrice + 5 + (-1 * dessert * currentPrice * 1 / 10);
    //round number 
    std::cout << round(fullPrice * 100) / 100;
  
    
}

