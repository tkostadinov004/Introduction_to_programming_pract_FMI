#include <iostream>

bool isDigit(char a) {
    return a >= '0' && a <= '9';
}

bool isUpper(char a) {
    return a >= 'A' && a <= 'Z';
}

bool isLower(char a) {
    return a >= 'a' && a <= 'z';
}

bool isAlpha(char a) {
    return isUpper(a) || isLower(a);
}
bool isAlnum(char a) {
    return isDigit(a) || isAlpha(a);
}

char capitalize(char a) {
    return isLower(a) ? (a - 'a' + 'A') : a;
}

char makeLower(char a) {
    return isUpper(a) ? (a - 'A' + 'a') : a;
}

int parseInt(char a) {
    return isDigit(a) ? (a - '0') : -1;
}

char toChar(int a) {
    return (a >= 0 && a <= 9) ? (a + '0') : '\0';
}

int myLog(int n, int base) {
    if (n <= 0 || base <= 1) return -1;
    int result = 0;
    for (int power = 1; power < n; power *= base) result++;
    return result;
}

int myPow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}

int myCeil(double a) {
    int intPart = static_cast<int>(a);
    return (a == intPart) ? intPart : intPart + 1;
}

int myFloor(double a) {
    return static_cast<int>(a);
}

double myAbs(double a) {
    return a < 0 ? -a : a;
}

    int main() {
        char testChar;

        std::cout << "Enter a character: ";
        std::cin >> testChar;

        std::cout << "isDigit: " << isDigit(testChar);
        std::cout << "isUpper: " << isUpper(testChar);
        std::cout << "isLower: " << isLower(testChar);
        std::cout << "isAlpha: " << isAlpha(testChar);
        std::cout << "isAlnum('" << testChar << "'): " << isAlnum(testChar) << std::endl;
        std::cout << "capitalize('b'): " << capitalize << std::endl;
        std::cout << "makeLower('D'): " << makeLower << std::endl;
        std::cout << "parseInt('7'): " << parseInt << std::endl;
        std::cout << "toChar(5): " << toChar << std::endl;
        std::cout << "myLog(100, 10): " << myLog << std::endl;
        std::cout << "myPow(2, 5): " << myPow << std::endl;
        std::cout << "myCeil(4.3): " << myCeil << std::endl;
        std::cout << "myFloor(4.7): " << myFloor << std::endl;
        std::cout << "myAbs(-5.5): " << myAbs << std::endl;
         
        return 0;
    } 
