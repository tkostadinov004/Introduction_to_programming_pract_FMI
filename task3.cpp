// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
bool isPalindrom(int x) {
    int originalNumber = x;
    int reverseNumber = 0;

while (x > 0) {
    int digit = x % 10;
    reverseNumber = reverseNumber * 10 + digit;
    x /= 10;

}
return originalNumber == reverseNumber;
}
int main()
{
    int x;
    std::cout << "eneter number ";
    std::cin >> x;
    if (isPalindrom(x)){
        std::cout << x << " is palindorme";
}
    else {
        std::cout << x << " is not palindrome";
        
    }
    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
