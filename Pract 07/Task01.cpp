#include <iostream>

int findBCDOfTwo(int numberA, int numberB) {
    while (numberB > 0) {
        int reminder = numberA % numberB;
        numberA = numberB;
        numberB = reminder;
    }
    return numberA;

} 
int findBiggestCommonDivisor(int number1, int number2, int number3, int number4) {
    //group them in two
    int numbers1And2 = findBCDOfTwo(number1, number2);
    int numbers12And3 = findBCDOfTwo(numbers1And2, number3);
    return findBCDOfTwo(numbers12And3, number4);
}
int main()
{
    int number1, number2, number3, number4;
    std::cout << "Enter 4 numbers: ";
    std::cin >> number1 >> number2 >> number3 >> number4;

    int divider1 = findBiggestCommonDivisor(number1, number2, number3, number4);
    std::cout << "BCD is: " << divider1;

}