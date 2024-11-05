#include <iostream>

long long power(long long a, int n) {
    long long base = a;
    //in case n = 0
    long long result = 1;
    
    /*using a bool, because at the end we will divide the result to 
    get the right answer if n is negative*/
    /*technically it can be in a separate function*/
    bool isNegative = (n < 0);
    if (isNegative) {
        n = -n;
    }

    while (n > 0) {
        // if n is negative
        if (n % 2 == 1) {
            result *= base;
        }
        base *= base;
        n /= 2;
    }
    //if the original n is negative, we should get something like 1/...
    if (isNegative) {
        return 1.0 / result;
    }
    return result;
}

int main() {
    //a can be a very big num, and also negative
    long long a;
    int n;
    std::cout << "Enter a base 'a': ";
    std::cin >> a;
    std::cout << "Enter a number 'n': ";
    std::cin >> n;

    std::cout << power(a, n);
}
