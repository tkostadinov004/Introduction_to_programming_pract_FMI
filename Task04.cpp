#include <iostream>

void swapKthDigit(int& m, int& n, int k) {
    int power = pow(10, k -2); 
    int digitM = (m / power) % 10; 
    int digitN = (n / power) % 10;
    m -= digitM * power;
    n -= digitN * power;
    m += digitN * power;  
    n += digitM * power; 
}

int main() {
    int m, n, k;
    std::cin >> m >> n >> k;

    swapKthDigit(m, n, k);

    std::cout << m << " " << n;
}
