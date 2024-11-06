#include <iostream>

bool isDigit(char symbol) {
    return '0' <= symbol && symbol <= '9';
}

bool isUpper(char symbol) {
    return 'A' <= symbol && symbol <= 'Z';
}

bool isLower(char symbol) {
    return 'a' <= symbol && symbol <= 'z';
}

bool isAlpha(char symbol) {
    return isUpper(symbol) || isLower(symbol);
}

bool isAlnum(char symbol) {
    return isAlpha(symbol) || isDigit(symbol);
}

char capitalize(char symbol) {
    return isLower(symbol) ? symbol - 'a' - 'A' : symbol;
}

char makeLower(char symbol) {
    return isUpper(symbol) ? symbol + 'a' - 'A' : symbol;
}

int parseInt(char symbol) {
    return isDigit(symbol) ? symbol - '0' : -1;
}

char toChar(int symbol) {
    return 0 <= symbol && symbol <= 9 ? symbol : '\0';
}

int myAbs(double symbol) {
    return symbol < 0 ? -symbol : symbol;
}

int myLog(int base, int num) {
    if (num <= 0 || base <= 1) {
        return -1;  
    }

    int res = 0;
    while (num >= base) {
        num /= base;  
        res++;     
    }

    return res;
}

double myPow(double num, int power) {
    if (power == 0) {
        return 1;
    }
    
    double res = num;

    for (int i = 1; i < myAbs(power); i++) {
        res *= num;
    }
    
    return power < 0 ? 1 / res : res;
}

int myCeil(double symbol) {
    return symbol + 1;
}

int myFloor(double symbol) {
    return symbol;
}

int main()
{

}
