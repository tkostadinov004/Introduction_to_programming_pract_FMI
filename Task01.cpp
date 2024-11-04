#include <iostream>


bool isDigit(char c) {
    return std::isdigit(c);
}

bool isUpper(char c) {
    return std::isupper(c);
}

bool isLower(char c) {
    return std::islower(c);
}

bool isAlpha(char c) {
    return std::isalpha(c);
}

bool isAlnum(char c) {
    return std::isalnum(c);
}

char capitalize(char c) {
    if (isLower(c)) {
        return std::toupper(c);
    }
    return c;
}

char makeLower(char c) {
    if (isUpper(c)) {
        return std::tolower(c);
    }
    return c;
}

int parseInt(char c) {
    if (isDigit(c)) {
        return c - '0'; 
    }
    return -1;
}

char toChar(int num) {
    if (num >= 0 && num <= 255) {
        return char(num);
    }
    return '\0';
}

double myLog(int number, int base) {
    if (number > 0 && base > 1) {
        return std::log(number) / std::log(base); 
    }
    return 0;
}

double myPow(double base, int a) {
    return std::pow(base, a);
}

int myCeil(double number) {
    return std::ceil(number); 
}

int myFloor(double number) {
    return std::floor(number); 
}

double myAbs(double number) {
    return std::abs(number); 
}

int main() 
{
    char c = 'a';
    std::cout << "isDigit('5'): " << isDigit('5') << "\n";
    std::cout << "isUpper('N'): " << isUpper('N') << "\n";
    std::cout << "isLower('b'): " << isLower('b') << "\n";
    std::cout << "isAlpha('K'): " << isAlpha('K') << "\n";
    std::cout << "isAlnum('8'): " << isAlnum('8') << "\n";
    std::cout << "capitalize('a'): " << capitalize(c) << "\n";
    std::cout << "makeLower('L'): " << makeLower('L') << "\n";
    std::cout << "parseInt('5'): " << parseInt('5') << "\n";
    std::cout << "toChar(55): " << toChar(55) << "\n";
    std::cout << "myLog(100, 10): " << myLog(100, 10) << "\n";
    std::cout << "myPow(5, 2): " << myPow(5, 2) << "\n";
    std::cout << "myCeil(3.4): " << myCeil(3.4) << "\n";
    std::cout << "myFloor(2.9): " << myFloor(2.9) << "\n";
    std::cout << "myAbs(-7.5): " << myAbs(-7.5) << "\n";
}
