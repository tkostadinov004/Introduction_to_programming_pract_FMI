#include <iostream>

bool descOrd(int num) {
    int curr = num % 10;
    while (num / 10) {
        num /= 10;
        if (!(num % 10 >= curr)) {
            return false;
        }
        curr = num % 10;
    }
    return true;
}

bool ascOrd(int num) {
    int curr = num % 10;
    while (num) {
        num /= 10;
        if (!(num % 10 <= curr)) {
            return false;
        }
        curr = num % 10;
    }
    return true;
}

bool getRes(int num) {
    return ascOrd(num) || descOrd(num);
}

int main() {
    int num;
    std::cin >> num;
    std::cout << std::boolalpha << getRes(num);
}
