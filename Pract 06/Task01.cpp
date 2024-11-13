#include <iostream>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    //max of unique prime numbers in int
    const int SIZE = 30;
    int primeNumbersArray[SIZE] = { 0 };
    int powerArray[SIZE] = { 0 };
    int counter = 0;
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    int currentDivider = 2;

    while (n > 1 && currentDivider <= n) {
        //check if the current divider is a prime and divides n
        if (isPrime(currentDivider) && n % currentDivider == 0) {
            //update arrays
            //if prime number not in array yet
            if (counter == 0 || primeNumbersArray[counter - 1] != currentDivider) {
                primeNumbersArray[counter] = currentDivider;
                powerArray[counter] = 1;
                counter++;
            }
            //if prime number already in array
            else {
                powerArray[counter - 1]++;
            }
            //update n
            n /= currentDivider;
        }
        //if divider is not prime, just move on
        else {
            currentDivider++;
        }
    }

    //output everything
    for (int i = 0; i < counter; i++) {
        std::cout << primeNumbersArray[i];
        if (powerArray[i] > 1) {
            std::cout << "^" << powerArray[i];
        }
        if (i < counter - 1) {
            std::cout << " * ";
        }
    }
}


