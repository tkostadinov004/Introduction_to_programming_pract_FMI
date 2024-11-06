#include <iostream>

int rnumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int conReversedWithOriginal(int n) {
    int reversed = rnumber(n);

    
    int multiplier = 1;
    int temp = n;
    while (temp > 0) {
        multiplier *= 10;
        temp /= 10;
    }

    
    return reversed * multiplier + n;
}

int main() {
    int n;
    std::cout << "Enter a number > 0 : ";
    std::cin >> n;
    if (n > 0) {
        int result = conReversedWithOriginal(n);
        std::cout << "Result: " << result << std::endl;
    }
    

    else {
        std::cout << "error";
    }
    system("pause>0");

} 
