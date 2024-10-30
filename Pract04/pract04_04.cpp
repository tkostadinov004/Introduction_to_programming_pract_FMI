#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long number;
    cout << "ånter a natural number: ";
    cin >> number;

    vector<int> digitCount(10, 0); 

  
    while (number > 0) {
        int digit = number % 10; 
        digitCount[digit]++;
        number /= 10; 
    }

    int maxCount = 0;
    int mostFrequentDigit = -1;


    for (int i = 0; i < 10; ++i) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
        else if (digitCount[i] == maxCount) {
            mostFrequentDigit = max(mostFrequentDigit, i); 
        }
    }

    cout << "the most common digit: " << mostFrequentDigit << endl;

 
}
