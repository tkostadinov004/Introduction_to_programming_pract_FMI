// ConsoleApplication318.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool areDigitsSorted(unsigned n) {
    bool ascending = true;  
    bool descending = true; 

    unsigned prevDigit = n % 10;  
    n /= 10;  

    
    while (n > 0) {
        unsigned currentDigit = n % 10;
        n /= 10;

        
        if (currentDigit > prevDigit) {
            descending = false;
        }
       
        if (currentDigit < prevDigit) {
            ascending = false;
        }

        prevDigit = currentDigit;  
    }

   
    return ascending || descending;
}

int main() {
    unsigned n;
    cout << "Enter number: ";
    cin >> n;

    if (areDigitsSorted(n)) {
        cout << "Sorted!" << endl;
    }
    else 
        cout << "Not Sorted!!" << endl;
    

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
