#include <iostream>

void findNumbers(int m, int n) {
    bool found = false; 

    for (int num = m; num <= n; ++num) {
        if (num < 1000 || num > 9999) continue; 

        
        int thousands = num / 1000;
        int tens_units = num % 100;  

        
        int newNumber = thousands * 100 + tens_units;

        
        if (newNumber % 11 == 0) {
            std::cout << num << " ";
            found = true;
        }
    }

    if (!found) {
        std::cout << "no numbers match the condition in the given interval.";
    }
}

int main() {
    int m, n;
    std::cout << "enter a number: ";
    std::cin >> m;
    std::cout << "enter a number bigger than the previous: ";
    std::cin >> n;

    
    if (m >= n) {
        std::cout << "error";
        
    }

    std::cout << "four-digit numbers in the interval [" << m << ", " << n << "] that meet the condition :";
    findNumbers(m, n);

    system("pause>0");
}
