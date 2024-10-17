// ConsoleApplication278.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number from 1 to 9: " << endl;
    cin >> number;

    switch (number) {

    case 1:
        cout << "I" << endl;
        break;

    case 2:
        cout << "II" << endl;
        break;

    case 3:
        cout << "III" << endl;
        break;

    case 4:
        cout << "IV" << endl;
        break;

    case 5:
        cout << "V" << endl;
            break;

    case 6:
        cout << "VI" << endl;
        break;

    case 7:
        cout << "VII" << endl;
        break;

    case 8:
        cout << "VIII" << endl;
        break;

    case 9:
        cout << "IX" << endl;
        break;

    default:
        cout << "Invalid input! " << endl;

    }
   
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
