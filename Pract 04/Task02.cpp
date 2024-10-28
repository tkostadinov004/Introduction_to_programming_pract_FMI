#include <iostream>

int main()
{
    int n;
    std::cout << "Enter amount of numbers: ";
    std::cin >> n;
    std::cout << "Now enter n numbers one by one: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        if (num % 2 == 0) {
            std::cout << num;
        }
    }
}

