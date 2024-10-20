#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3) {
        std::cout << num1 << ' ';

        if (num2 <= num3) {
            std::cout << num2 << ' ';
            std::cout << num3;
        }

        else {
            std::cout << num3 << ' ';
            std::cout << num2;
        }
    }

    else if (num2 <= num1 && num2 <= num3) {
        std::cout << num2 << ' ';

        if (num1 <= num3) {
            std::cout << num1 << ' ';
            std::cout << num3;
        }

        else {
            std::cout << num3 << ' ';
            std::cout << num1;
        }
    }

    else {
        std::cout << num3 << ' ';

        if (num2 <= num1) {
            std::cout << num2 << ' ';
            std::cout << num1;
        }

        else {
            std::cout << num1 << ' ';
            std::cout << num2;
        }
    }
}
