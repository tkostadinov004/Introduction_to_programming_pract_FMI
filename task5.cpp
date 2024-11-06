#include <iostream>

int concatenateReversed(int n) {
    int reversed = 0;
    int original = n;

   
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    
    int multiplier = 1;
    int temp = original;
    while (temp > 0) {
        multiplier *= 10;
        temp /= 10;
    }

    
    int concatenated = reversed * multiplier + original;
    return concatenated;
}

int main() {
    int n;
    std::cout << " n: ";
    std::cin >> n;
    if (n <= 0) {
    std::cout << "error" }
    else {
        int concatenatedNumber = concatenateReversed(n);
        std::cout << "result is: " << concatenatedNumber << std::endl;
    }
    system=("pause>0") ;
}
