#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter number of digits (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "invalid number of digits" << endl;
        return 1;
    }

    int number;
    int minNumber, maxNumber;
    double sum = 0.0;

   
    for (int i = 0; i < n; ++i) {
        cout << "enter a number " << (i + 1) << ": ";
        cin >> number;

   
        if (i == 0) {
            minNumber = maxNumber = number;
        }

       
        if (number < minNumber) {
            minNumber = number;
        }
        if (number > maxNumber) {
            maxNumber = number;
        }

        sum += number; 
    }

  
    double average = sum / n;

   
    cout << "the smallest number: " << minNumber << endl;
    cout << "the biggest number: " << maxNumber << endl;
    cout << "arithmetic mean: " << average << endl;

   
}
