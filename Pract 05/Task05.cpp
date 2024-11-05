#include <iostream>
int num1, num2;
int numCheck(){
    do {
        std::cout << "Enter two positive numbers: ";
        std::cin >> num1 >> num2;
    } while (num1 < 0 || num2 < 0);
    //returns one of the numbers it does not matter
    return num2;
}
int concatNums(int num1, int num2) {
    int duplNum2 = num2;
    while (duplNum2 > 0) {
       num1 *= 10;
       duplNum2 /= 10; 
    }
    num1 += num2;
    return num1;
}
int main()
{
    numCheck();
    //find the lenght of num1 and add on    
    std::cout << concatNums(num1, num2);
}
