#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "three-digit number n: ";
    cin >> n;

    if (n >= 100 && n <= 999) {
        cout << " simple three-digit numbers up to " << n << " with a one-digit sum of the digits are: " << endl;
        for (int num = 100; num <= n; ++num) {
            if (isPrime(num) && sumOfDigits(num) < 10) {
                cout << num << endl;
            }
        }
    }
    else {
        cout << "error" << endl;
    }

   
}

