#include <iostream>

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

bool isUpper(char ch) {
    return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch) {
    return ch >= 'a' && ch <= 'z';
}

bool isAlpha(char ch) {
    return isUpper(ch) || isLower(ch);
}

bool isAlnum(char ch) {
    return isDigit(ch) || isAlpha(ch);
}

char capitalize(char ch) {
    return isLower(ch) ? (ch - 'a' + 'A') : ch; //tuka malko stackoverflow che neshto bugnah. mn ne getvam zashto twa raboti tho (ch - 'a' + 'A')
}

char makeLower(char ch) {
    return isUpper(ch) ? (ch - 'A' + 'a') : ch;
}

int parseInt(char ch) {
    return isDigit(ch) ? (ch - '0') : -1;
}

char toChar(int num) {
    return (num >= 0 && num <= 9) ? (num + '0') : '\0';
}

double myLog(int number, int base) {
    if (number <= 0 || base <= 1) return -1.0; 

    double result = 0.0;
    while (number >= base) {
        number /= base;
        result += 1.0;
    }

    double num = number;
    return result + (num / base);
}

double myPow(double base, int st) {
    double result = 1.0;
    bool isNegative = (st < 0);
    st = isNegative ? -st : st;

    for (int i = 0; i < st; ++i) {
        result *= base;
    }

    return isNegative ? (1.0 / result) : result;
}

int myCeil(double num) {
    int number = num;
    int intPart = number;
    return (num > intPart) ? (intPart + 1) : intPart;
}

int myFloor(double num) {
    int number = num;
    int intPart = number;
    //towa go pravq za da ne izpolzvam static cast 

    return (num < intPart) ? (intPart - 1) : intPart;
}

double myAbs(double num) {
    return (num < 0) ? -num : num;
}

int main() {
    std::cout << "isDigit('5'): " << isDigit('5') << std::endl;
    std::cout << "isUpper('A'): " << isUpper('A') << std::endl;
    std::cout << "capitalize('b'): " << capitalize('b') << std::endl;
    std::cout << "parseInt('7'): " << parseInt('7') << std::endl;
    std::cout << "toChar(9): " << toChar(9) << std::endl;
    std::cout << "myLog(16, 2): " << myLog(16, 2) << std::endl;
    std::cout << "myPow(2, 3): " << myPow(2, 3) << std::endl;
    std::cout << "myCeil(4.3): " << myCeil(4.3) << std::endl;
    std::cout << "myFloor(4.9): " << myFloor(4.9) << std::endl;
    std::cout << "myAbs(-4.7): " << myAbs(-4.7) << std::endl;
}