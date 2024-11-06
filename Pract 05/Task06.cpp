#include <iostream>

int reverse(int n) {
    int result = n % 10;
    n /= 10;
    while (n > 0) {
        result *= 10;
        result += n % 10;
        n /= 10;
    }
    return result;
}

int concatNums(int n1, int n2) {
    int n2Duplicate = n2;
    while (n2Duplicate > 0) {
        n1 *= 10;
        n2Duplicate /= 10;
    }
    return n1 + n2;
}


int concatReverse(int n) {
    int reversedN = reverse(n);
    return concatNums(n, reversedN);
}


int main()
{
    int n;
    std::cin >> n;
    std::cout << concatReverse(n);
}
