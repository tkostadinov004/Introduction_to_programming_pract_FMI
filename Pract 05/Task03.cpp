#include <iostream>

bool isSpecialNumber(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum  == number) {
        return 1;
    }
    return 0;

}
int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << std::boolalpha << isSpecialNumber(number);

    
}
