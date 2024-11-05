#include <iostream>



int isDigit(int n) {

    return n >= 0 && n <= 9;
}
bool isUpper(char character) {

    return (character >= 'A' && character <= 'Z');
}
bool isLower(char character) {
    
    return (character >= 'a' && character <= 'z');
}
bool isAlpha(char character) {

    return isUpper(character) || isLower(character);
}
bool isAlnum(char character) {
    
    return isAlpha(character) || (character >= '0' && character <= '9');
}
char capitalize(char character) {
    
    return isAlpha(character) ? character - 32 : character;
}
char makeLower(char character) {
    
    return isAlpha(character) ? character + 32 : character;
}
int parseInt(char character) {

    return isAlnum(character) && !isAlpha(character) ? character - 48 : -1;
}
char toChar(int n) {

    return n >= 0 && n <= 127 ? n : '\0';
}
int myLog(unsigned int n, unsigned int base) {
    //validation for the input
    if (n <= 0 || base <= 1) {
        std::cout << "Enter a positive number and/ or a base bigger than 0!" << std::endl;
        return -1;
    }
    int result = 0;
    while (n >= base) {
        n /= base;
        result++;
    }
    //for example n is 90 and base is 3 -->  it's 4.0959 but rounded to 4
    std::cout << "Attention! The number is rounded: ";
    return result;
}
double myPow(int n, int power) {
    double f = 1;
    double nDupl = n;
    //for negative power
    if (power < 0) {
        power *= -1;
        nDupl = 1.0 / n;
    }
    for (int i = 0; i < power; i++) {
        f *= nDupl;
    }
    return f;
}
int myCeil(int n2) {
    return n2 + 1;
}
int myFloor(double n2) {
    return n2;
}
int myAbs(int n) {
    return n >= 0 ? n : -1 * n;
}
int main()
{
    //n is number for most functions that need a number
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    //char for most functions that need a char
    char character ;
    std::cout << "Enter a symbol: ";
    std::cin >> character;
    //the base is used for 'myLog' function
    /*myLog requires base to be a positive number, so if decided to use 
    two different variables for base and power for the next function in
    case those two functions are both called.*/
    int base;
    std::cout << "Function myLog: Enter base for log: ";
    std::cin >> base;
    //power is ised for 'myPow' function
    int power;
    std::cout << "Function myPow: Enter power to find the pow of a number: ";
    std::cin >> power;
    //n2 is ised for 'myCeil, myFloor' functions
    double n2;
    std::cout << "Functions: Enter a fractional number: ";
    std::cin >> n2;


    /*help urself*/
    //std::cout << isDigit(n) << std::endl;
    //std::cout << std::boolalpha << isUpper(character) << std::endl;
    //std::cout << std::boolalpha << isLower(character) << std::endl;
    //std::cout << std::boolalpha << isAlpha(character) << std::endl;
    //std::cout << std::boolalpha << isAlnum(character)<< std::endl;
    //std::cout << capitalize(character) << std::endl;
    //std::cout << parseInt(character) << std::endl;
    //std::cout << toChar(n) << std::endl;
    //std::cout << myLog(n, base) << std::endl;
    //std::cout << myPow(n, power) << std::endl;
    //std::cout << myCeil(n2) << std::endl;
    //std::cout << myFloor(n2) << std::endl;
    //std::cout << myAbs(n) << std::endl;


}

