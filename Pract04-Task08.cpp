// ConsoleApplication302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 2) {
        cout << "Enter a number greater than or equal to 2." << endl;
        return 1;
    }

    int num1, num2;
    cin >> num1 >> num2;

    int max1, max2;
    if (num1 > num2) {
        max1 = num1;
        max2 = num2;
    }
    else {
        max1 = num2;
        max2 = num1;
    }

    for (int i = 2; i < n; i++) {
        int num;
        cin >> num;

        if (num > max1) {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2 && num < max1) {
            max2 = num;
        }
    }

    cout << max1 << " " << max2 << endl;

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
