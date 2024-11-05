#include <iostream>

bool isPerfect(int number) {
    if (number <= 0) return false; 

    int sum = 0;

    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) { 
            sum += i; 
        }
    }

    return sum == number; 
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPerfect(num)) {
        std::cout << num << " True." << std::endl;
    }
    else {
        std::cout << num << " False." << std::endl;
    }

    return 0;
}
