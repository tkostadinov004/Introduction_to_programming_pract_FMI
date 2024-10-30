#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "positive integer n (n >= 2): ";
    cin >> n;

    if (n < 2) {
        cout << "error" << endl;
        return 1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    cout <<  n << " whole numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        if (num > largest) {
            secondLargest = largest; 
            largest = num; 
        }
        else if (num > secondLargest && num < largest) {
            secondLargest = num; 
        }
    }

    cout << "biggest number: " << largest << endl;
    cout << "second biggest: " << secondLargest << endl;

    
}
