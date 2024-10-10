#include <iostream>

int main ()
{
    //Задача 5

    int a;
    int b;

    std::cout << "Type two numbers and see if they are multiples of each other" << '\n';
    std::cout << "If they are then 1  If they are not then 0" << '\n';
    std::cin >> a >> b;

    if (b != 0) {
        if (a % b == 0) {
            std::cout << "1" << '\n';
        }
        else {
            std::cout << "0" << '\n';
        }
    }
    else {
        std::cout << "The second number can not be 0" << '\n';
    }
}