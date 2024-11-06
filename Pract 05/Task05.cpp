#include <iostream>
int numCheck(){
    int num;
    do {
        std::cout << "Enter two positive numbers: ";
        std::cin >> num;
    } while (num < 0);
    return num;
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
    int num1 = numCheck();
    int num2 = numCheck();
    //find the lenght of num1 and add on    
    std::cout << concatNums(num1, num2);
}
