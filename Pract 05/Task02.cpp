#include <iostream>

bool checkSum(int num) {
    return (num % 10 + (num / 10) % 10 + (num / 100) % 10) < 10;
}

bool checkPrime(int num) {
    for (int i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void getResult(int num) {
    for (int i = 101; i <= num; i++) {
        if (checkSum(i) && checkPrime(i)) {
            std::cout << i << ' ';
        }
    }
}

int main() {
    int num;
    std::cin >> num;
    getResult(num);
}
