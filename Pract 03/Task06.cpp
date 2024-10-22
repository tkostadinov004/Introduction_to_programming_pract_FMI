
#include <iostream>
#include <cmath>

int main()
{
    int coordX, coordY, radius;
    std::cout << "Enter X and Y and a radius: ";
    std::cin >> coordX >> coordY >> radius;
    
    double line = sqrt(coordX * coordX + coordY * coordY);

    if (line == radius){
        std::cout << "On the circle";
    }
    else if (line > radius) {
        std::cout << "Outside the circle";
    }
    else {
        std::cout << "Inside the circle";
    }
}

