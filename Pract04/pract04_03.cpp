#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter a number in binary number system: ";
    cin >> binary;

    int decimal = 0;

   
    for (size_t i = 0; i < binary.length(); ++i) {
        if (binary[binary.length() - 1 - i] == '1') {
            decimal += (1 << i); 
        }
    }

    cout << "The decimal representation: " << decimal << endl;

    
}
