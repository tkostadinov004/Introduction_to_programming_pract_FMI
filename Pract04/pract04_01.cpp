#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "natural number: ";
    cin >> n;

    if (n < 2) {
        isPrime = false; 
    }
    else {
        for (int i = 2; i < n; ++i) {
            if (n % i == 0) {
                isPrime = false; 
                break; 
            }
        }
    }

    if (isPrime) {
        cout << n << " simple number" << endl;
    }
    else {
        cout << n << " not simple number" << endl;
    }

  
}
