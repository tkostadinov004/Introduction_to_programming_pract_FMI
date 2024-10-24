// ConsoleApplication299.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number needs to be positive!" << endl;
        return 1;
    }

    int num;
    cout << "Enter number 1: ";
    cin >> num;

   
    int minNumber = num;
    int maxNumber = num;
    int sum = num;

   
    for (int i = 1; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;

        
        if (num < minNumber) {
            minNumber = num;
        }
        if (num > maxNumber) {
            maxNumber = num;
        }

        
        sum += num;
    }

   
    double average = (double)sum / n;

    
    cout << "min = " << minNumber << ", max = " << maxNumber << ", avg = " << average << endl;

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
