// ConsoleApplication298.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int binary;
    cout << "Enter a binary number: " << endl;
    cin >> binary;

    int decimal = 0;
    int position = 0;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, position);
        binary /= 10;
        position++;
    }

    cout << "The number is: " << decimal << endl;
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
