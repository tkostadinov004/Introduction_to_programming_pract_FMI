#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cout << "Enter 3 numbers: ";
    std::cin >> num1 >> num2 >> num3;

    /*
    1 2 3
    1 3 2
    2 1 3
    2 3 1
    3 1 2
    3 2 1
    */
    if (num1 <= num2 && num1 <= num3) {
        std::cout << num1;
        if (num2 <= num3) {
            std::cout << " " << num2 << " " << num3;
        }
        else {
            std::cout << " " << num3 << " " << num2;
        }
    }
    else if (num2 <= num1 && num2 <= num3) {
        std::cout << num2;
        if (num1 <= num3) {
            std::cout << " " << num1 << " " << num3;
        }
        else {
            std::cout << " " << num3 << " " << num1;
        }
    }
    else if (num3 <= num1 && num3 <= num2) {
        std::cout << num3;
        if (num1 <= num2) {
            std::cout << " " << num1 << " " << num2;
        }
        else {
            std::cout << " " << num2 << " " << num1;
        }
    }



}

