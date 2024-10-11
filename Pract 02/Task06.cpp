#include <iostream>

int main()
{
    int num_burger, num_fish, num_chicken;
    std::cin >> num_burger >> num_fish >> num_chicken;
    
    double sum_order = num_burger * 8.25 + num_fish * 12 + num_chicken * 10.99;
    bool dessert = (sum_order > 60);
    
    sum_order += dessert * sum_order * 0.1;
    sum_order += 5;
    
    std::cout << sum_order;
}
