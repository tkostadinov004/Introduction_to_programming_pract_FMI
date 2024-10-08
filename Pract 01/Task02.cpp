#include <iostream>

int main()
{
    double temp_cels;
    std::cin >> temp_cels;

    double temp_kelv = temp_cels + 273.15;
    double temp_fahr = temp_cels * 1.8 + 32;

    std::cout << "Kelvin: " << temp_kelv << std::endl;
    std::cout << "Fahrenheit: " << temp_fahr;
}
