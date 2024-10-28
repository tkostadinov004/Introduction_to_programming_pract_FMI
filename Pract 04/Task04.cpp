#include <iostream>

int main()
{

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int maxCount = 0;
    int maxCountDigit = 0;

    //if the number is negative
    if (number < 0) {
        number = -number;
    }

    //fisrt, loop all digits 0-9
    for (int currentDigit = 0; currentDigit <= 9; currentDigit++) {
        //add the current count
        int currentCount = 0;
        //make a duplicate for the original number
        int duplNumber = number;

        //loop all the digits in duplNumber for each digit 0-9
        while (duplNumber > 0) {
            //take the last digit of the 'original number;
            int lastDigit = duplNumber % 10;
            if (lastDigit == currentDigit) {
                currentCount++;
            }
            //make the number smaller
            duplNumber /= 10;

        }
        //update which digit is most common
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxCountDigit = currentDigit;
        }
        //if same count, but bigger number
        else if (currentCount == maxCount && currentDigit > maxCountDigit) {
            maxCountDigit = currentDigit;
        }
    }
    std::cout << maxCountDigit;

}
