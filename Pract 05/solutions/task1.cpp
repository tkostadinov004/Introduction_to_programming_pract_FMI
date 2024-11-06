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
    if (isLower(ch)) {
        return ch - 'a' + 'A';
    }
    return ch;
}
char makeLower(char ch) {
    if (isUpper(ch)) {
        return ch - 'A' + 'a';
    }
    return ch;
}
int parseInt(char ch) {
    if (isDigit(ch)) {
        return ch - '0';
    }
    return -1;
}
char toChar(int num) {
    if (num >= 0 && num <= 9) {
        return '0' + num;
    }
    return '\0';
}
int myLog(int base, int num) {
    if (base <= 1 || num <= 0) {
        return -1;
    }
    int result = 0;
    int pow = 1;
    while (pow < num) {
        pow *= base;
        result++;
    }
    return (pow == num) ? result : result - 1;
}
int myPow(int base, int exponent) {
    if (exponent == 0) return 1;
    int result = 1;
    int absExponent = (exponent < 0) ? -exponent : exponent;
    for (int i = 0; i < absExponent; i++) {
        result *= base;
    }
    return (exponent < 0) ? 1 / result : result;
}
int myCeil(double num) {
    int integerPart = num;
    if (num > integerPart) {
        return integerPart + 1;
    }
    return integerPart;
}
int myFloor(double num) {
    int integerPart = num;
    if (num < integerPart) {
        return integerPart - 1;
    }
    return integerPart;
}

int myAbs(int num) {
    return (num < 0) ? -num : num;
}
int main(){
    int a;
    std::cin >> a;
}