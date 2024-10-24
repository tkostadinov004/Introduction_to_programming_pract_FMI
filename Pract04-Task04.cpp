// ConsoleApplication293.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mostFrequentDigit = -1;
    int maxCount = 0;

    for (int i = 0; i <= 9; i++) {
        int temp = n;
        int count = 0;

        while (temp > 0) {
            if (temp % 10 == i) {
                count++;
            }
            temp /= 10;
        }
        if (count > maxCount || (count == maxCount && i > mostFrequentDigit)) {
            maxCount = count;
            mostFrequentDigit = i;
        }
    }
    cout << "Most Frequent Digit is: " <<mostFrequentDigit<< endl;
    return 0;
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
