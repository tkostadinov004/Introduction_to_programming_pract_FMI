#include <iostream>

int main()
{
    int num1, num2, num3, num4, num5;
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if ((num2 <= num1 || num1 < num2) && (num1 <= num2 && num3 <= num2 || num2 <= num1 && num2 <= num3) && (num3 <= num2 && num3 <= num4 || num4 <= num3 && num2 <= num3) && (num4 <= num3 && num4 <= num5 || num5 <= num4 && num3 <= num4) && (num5 <= num4 || num4 < num5)) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }
}
