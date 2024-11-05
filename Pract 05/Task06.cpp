#include <iostream>
int checkNum() {
    int num;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);
    return num;
}
int concatReverse(int num){
    int reverse = 0;
    int numDupl = num;
    //will help with the cases of zeros
    int multiplier = 1; 
    // count the digits
    while (numDupl > 0) {
        numDupl /= 10; 
        multiplier *= 10; 
    }

    // reuse the numDupl variable
    numDupl = num;
    while (numDupl > 0) {
        int digit = numDupl % 10;
        reverse = reverse * 10 + digit;
        numDupl /= 10;
    }

    return (reverse * multiplier + num);

}
int main()
{
    int num = checkNum();
    std::cout << concatReverse(num);
}
