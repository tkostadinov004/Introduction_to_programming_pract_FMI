#include <iostream>

int main()
{
    int n;
    int num1 = 0;
    int num2 = 1;
    std::cout << "Enter an amount of fibonacci numbers you want: ";
    std::cin >> n;
    int nextNum = num1 + num2;
    for (int i = 0; i < n; i++) {
        std::cout << nextNum << std::endl;
        //we learnt about this
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
}
