#include <iostream>

int main() {

    double celsius;
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    double kelvin = celsius + 273.15;

    
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << "\n";
    std::cout << "Temperature in Kelvin: " << kelvin;

   
}
