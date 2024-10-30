#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a numbwr n: ";
    cin >> n;

    if (n <= 0) {
        cout << "positive number." << endl;
        return 1;
    }

    
    long long a = 0, b = 1;

    cout << "the first " << n << " fibonacci numbers: ";

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            cout << a;
        }
        else if (i == 1) {
            cout << ", " << b;
        }
        else {
            long long next = a + b; 
            cout << ", " << next;
            a = b; 
            b = next;
        }
    }
    cout << endl;

   
}
