#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    int evenNumber = 0; 
    int placeValue = 1; 

    cout << n << " number:" << endl;
    for (int i = 0; i < n; ++i) {
        int digit;
        cin >> digit;

        if (digit % 2 == 0) { 
            evenNumber = evenNumber * 10 + digit; 
        }
    }

    cout << "the number formed by the even digits is: " << evenNumber << endl;

    
}

