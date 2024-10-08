#include <iostream>

int main()
{
    double C = 0;
    double F = 0;
    double K = 0;
    std::cout << "Temperature in celsius: ";
    std::cin >> C;
    K = C + 273.15;
    F = ((C*9)/5 + 32);
    std::cout << "Celsius temperature is " << C <<std::endl;
    std::cout << "Kelvin temperature is " << K <<std::endl;
    std::cout << "Fahrenheit eagle temperature is " << F <<std::endl;
    return 0;
    
}
