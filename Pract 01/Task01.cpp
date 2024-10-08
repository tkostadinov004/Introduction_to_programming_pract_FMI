#include <iostream>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    double result_perimeter = a + b + c;
    double semi_perimeter = result_perimeter / 2;
    double result_area = sqrt(semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c));

    std::cout << "Area: " << result_area << std::endl;
    std::cout << "Perimeter: " << result_perimeter;
}
