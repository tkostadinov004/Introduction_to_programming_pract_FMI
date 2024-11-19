#include <iostream>
int reverseNumber(int number) {
    int duplicate = 0;
    while (number > 0) {
        int lastDigit = number % 10;
        duplicate = duplicate * 10 + lastDigit;
        number /= 10;
    }
    return duplicate;
}
int findExactDivisor(int divisor, int stopper) {
    for (int i = 0; i < stopper; i++) {
        divisor *= 10;
    }
    return divisor;
}
int findAdditionalNumbers(int number, int divisor) {
    return number % divisor;
}
int extractFromNumber1(int number1, int k) {
    for (int i = 0; i > k; i++) {
        number1 /= 10;
    }
    return number1;
}
int makeNumber2(int number, int additionalNumbers, int divisor) {
    return number * divisor + additionalNumbers;
}
int main()
{
    int number1, number2, k;
    std::cout << "Enter two numbers and an index: ";
    std::cin >> number1 >> number2 >> k;

    int divisor = findExactDivisor(1, k);
    int additionalNumbers = findAdditionalNumbers(number1, divisor);
    additionalNumbers = reverseNumber(additionalNumbers);
    int newNumber1 = extractFromNumber1(number1, k);
    //reverse number2
    int reverseNumber2 = reverseNumber(number2);
    int newNumber2 = makeNumber2(reverseNumber2, additionalNumbers, divisor);

    

    std::cout << reverseNumber(newNumber2);

    // 1957 234   2
    // 19   57234
}

