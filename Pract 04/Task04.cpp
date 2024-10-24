#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int mostSeen = 0;
    int countOfMostSeen = 0;

    int tempNum = num;
    int iteration = 1;
    while (tempNum > 0) {
        short lastDigit = tempNum > 9 ? tempNum % 10 : tempNum;

        int numCopy = num;
        int count = 0;
        while (numCopy > 0) {
            short digit = numCopy > 9 ? numCopy % 10 : numCopy;
            if (digit == lastDigit) {
                count++;
            }
            numCopy /= 10;
        }
        tempNum /= 10;
        
        if (count > countOfMostSeen) {
            mostSeen = lastDigit;
            iteration = 1;
            countOfMostSeen = count;
        } else if (count == countOfMostSeen) {
            iteration *= 10;
            mostSeen += lastDigit * iteration;
        }
    }

    short biggest = 0;
    while (mostSeen > 0) {
        short lastDigit = mostSeen > 9 ? mostSeen % 10 : mostSeen;
        if (lastDigit > biggest) {
            biggest = lastDigit;
        }
        mostSeen /= 10;
    }

    std::cout << biggest;
}