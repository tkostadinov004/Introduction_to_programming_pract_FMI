#include <iostream>

bool isSpecialNumber(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;

}
int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << std::boolalpha << isSpecialNumber(number);

    
}
