#include <iostream>

//one function for valid input
int getInput() {
    int number;
    do {
        std::cout << "Enter a number between 100 and 999: ";
        std::cin >> number;
    } while (number < 100 || number > 999); 
    return number;
}

//a function that checks if the number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    int counter = 0;

    for (int j = 2; j < num; j++) {
        if (num % j == 0) {
            return 0;
        }
    }
return 1;
}

//function to find the sum and check
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

//combo of the prime and sum function
void findSpecialNumbers(int maxNumber) {
    for (int i = 100; i < maxNumber; i++) {
        if (isPrime(i)) {
            int sum = sumOfDigits(i);
            if (sum <= 9) {
                std::cout << i << std::endl;
            }
        }
    }
}

int main() {
    //function for valid input
    int number = getInput();  
    //after we have a number, we see if it's prime and the sum is <= 9
    //findSpecialNumbers is using two other functions!
    findSpecialNumbers(number);
}
