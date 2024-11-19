#include <iostream>

int checkNumber(int digits) {
    int number;
    std::cout << "Enter a number with " << digits << " digits: " << std::endl;
    std::cin >> number;
    int duplicate = number;
    for (int i = 0; i < digits; i++) {
        duplicate /= 10;
    }
    return duplicate > 0 ? 0 : number;
}

int findBulls(int secret, int guess) {
    int bulls = 0;
    while (secret > 0) {
        if (secret % 10 == guess % 10) {
            bulls++;
        }
        secret /= 10;
        guess /= 10;
    }
    return bulls;
}
int findEachCow(int lastDigit, int guess) {
    int counter = 0;
    while (guess > 0) {
        if (guess % 10 == lastDigit) {
            counter++;
        }
        guess /= 10;
    }
    return counter;
}
int findCows(int secret, int guess) {
    int cows = 0;
    while (secret > 0) {
        int lastDigit = secret % 10;
        cows += findEachCow(lastDigit, guess);
        secret /= 10;
    }
    return cows;
}



int main()
{
    int digits, secretNumber, guessNumber;
    std::cout << "Enter an amount of digits: " << std::endl;
    std::cin >> digits;

    do {
        secretNumber = checkNumber(digits);
    } while (secretNumber == 0);

   

    do {
        std::cout << "Enter a number with " << digits << " digits: " << std::endl;
        std::cin >> guessNumber;
        int bull = findBulls(secretNumber, guessNumber);
        int cow = findCows(secretNumber, guessNumber);
        if (bull == digits) {
            std::cout << "You guessed the number!" << std::endl;
        }
        else {
            std::cout << bull << " bull, " << cow - bull << " cow" << std::endl;


        }
    } while (secretNumber != guessNumber);
}