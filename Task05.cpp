#include <iostream>
int getLastKDigits(int num, int k) {
    int power = 1;
    for (int i = 0; i < k; ++i) {
        power *= 10;
    }
    return num % power; 
}
int removeLastKDigits(int num, int k) {
    int power = 1;
    for (int i = 0; i < k; ++i) {
        power *= 10;
    }
    return num / power; 
}
int prependToNumber(int numToPrepend, int num) {
    int power = 1;
    while (num >= power) {
        power *= 10;
    }
    return numToPrepend * power + num; 
}

int main() {
    int a, b, k;
    std::cin >> a >> b >> k;

    int lastKDigits = getLastKDigits(a, k);
    a = removeLastKDigits(a, k); 
    b = prependToNumber(lastKDigits, b);

    std::cout << a << " " << b;
}
