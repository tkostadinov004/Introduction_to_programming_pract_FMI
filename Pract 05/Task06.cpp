#include <iostream>
int checkNum() {
    int num;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);
    return num;
}
//will help with the cases of zeros
int multiplierNumber(int multiplier, int num) {
    while (num > 0) {
        num /= 10;
        multiplier *= 10;
    }
    return multiplier;
}

int reverseNumber(int num) {
    int reverse = 0;
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}
int concatReverse(int num){
    int numDupl = num;
    return (reverseNumber(num) * multiplierNumber(1, num) + num);

}
int main()
{
    int num = checkNum();
    std::cout << concatReverse(num);
}
