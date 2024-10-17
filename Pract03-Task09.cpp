// ConsoleApplication284.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    
    cout << "Enter day,month and year: " << endl;
    cin >> day >> month >> year;

    
    if (month < 3) { 
        month += 12;
        year--;
    }

    int k = year % 100; 
    int j = year / 100; 

    
    int f = day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 - 2 * j;

    
    int dayOfWeek = f % 7; 
    if (dayOfWeek < 0) {
        dayOfWeek += 7; 
    }

    
    if (dayOfWeek == 0) {
        cout << "Saturday" << endl;
    }
    else if (dayOfWeek == 1) {
        cout << "Sunday" << endl;
    }
    else if (dayOfWeek == 2) {
        cout << "Monday" << endl;
    }
    else if (dayOfWeek == 3) {
        cout << "Tuesday" << endl;
    }
    else if (dayOfWeek == 4) {
        cout << "Wednesday" << endl;
    }
    else if (dayOfWeek == 5) {
        cout << "Thursday" << endl;
    }
    else if (dayOfWeek == 6) {
        cout << "Friday" << endl;
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
