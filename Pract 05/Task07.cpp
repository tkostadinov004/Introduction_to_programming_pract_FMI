#include <iostream>
int checkNum() {
    int num;
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    } while (num < 0);
    return num;
}
bool checkSort(int num) {
    //bools for asc and desc
    bool ascending = true; 
    bool descending = true; 
    //fisrt, get the last digit
    int previousDigit = num % 10; 
    //remove it
    num /= 10; 
    //and then beginn the while loop
    while (num > 0) {
        int currentDigit = num % 10;
        //check for the order
        if (currentDigit > previousDigit) {
            ascending = false;
        }
        if (currentDigit < previousDigit) {
            descending = false;
        }
        //update previous digit
        previousDigit = currentDigit;
        num /= 10;
    }
    return ascending || descending;

}
int main()
{
    int num = checkNum();
    std::cout << std::boolalpha << checkSort(num); 

}

