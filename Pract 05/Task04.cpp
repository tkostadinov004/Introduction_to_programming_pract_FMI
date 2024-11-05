#include <iostream>

int palindromeCheck(){
    //by definition palindromes cannot be negative
    int num;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);
    return num;
}
bool palindromeNumber(int num) {
    int nDupl = num;
    int reversedNum = 0;
    while (nDupl > 0) {
        int digit = nDupl % 10;
        reversedNum = reversedNum * 10 + digit; 
        nDupl /= 10;
    }
    return reversedNum == num;
}
int main()
{
    //check for valid number
    int num = palindromeCheck();
    std::cout << std::boolalpha << palindromeNumber(num);

}
