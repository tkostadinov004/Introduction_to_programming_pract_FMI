#include <iostream>

int main()
{
    double num1, num2;
    char symbol;

    std::cin >> num1 >> num2 >> symbol;

    switch (symbol) {
      case '+': std::cout << num1 + num2; break;
      case '-': std::cout << num1 - num2; break;
      case '*': std::cout << num1 * num2; break;
      case '/': std::cout << num1 / num2; break;
    }
}
