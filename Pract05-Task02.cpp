// ConsoleApplication313.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false;  
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }
    return true;  
}


int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;         
    }
    return sum;
}


void printPrimeNumbers(int n) {
    for (int i = 100; i <= n; i++) {  
        if (isPrime(i)) { 
            int sum = sumOfDigits(i);  
            if (sum < 10) {  
                cout << i << " ";  
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter three digit number: ";
    cin >> n;

    
    printPrimeNumbers(n);

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
