// ConsoleApplication303.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Enter a natural number: ";
    cin >> number;

    if (number < 0) {
        cout << "Enter a non-negative number" << endl;
        return 1;
    }

    double guess = number / 2.0;
    double precision = 0.0001;
    double difference;

    do {
        double new_guess = 0.5 * (guess + number / guess);
        difference = new_guess - guess;

        if (difference < 0) {
            difference = -difference;
        }

        guess = new_guess;

    } while (difference > precision);

    cout << "Square root: " << guess << endl;

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
