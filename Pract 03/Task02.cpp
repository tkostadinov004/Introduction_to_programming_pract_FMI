
#include <iostream>

int main()
{
    int num1, num2;
    char operatorCalc;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Enter an operator: ";
    std::cin >> operatorCalc;
    
    if (operatorCalc == '+') {
        std::cout << num1 + num2;
    }
    else if (operatorCalc == '-') {
        std::cout << num1 - num2;
    }
    else if (operatorCalc == '/') {
        double result = (double) num1 / num2;
        std::cout << result;
    }
    else if (operatorCalc == '*') {
        double result = (double) num1 * num2;
        std::cout << result;
    }
    else{
        std::cout << "Invalid input!";
    }
}

