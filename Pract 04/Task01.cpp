
#include <iostream>

int main()
{
    int num1;
    std::cout << "Enter a number: ";
    std::cin >> num1;
    int counter = 0;
    for (int i = 1; i < num1; i++) {
        if (num1 % i == 0) {
            counter++;
        }
    }
    if (counter > 2 || num1 == 1) {
        std::cout << "not prime";
    }
    else {
        std::cout << "prime";
    }  
}

