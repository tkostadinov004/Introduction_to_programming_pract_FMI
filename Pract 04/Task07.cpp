#include <iostream>

int main() {
    int n;
    bool is_prime;
    std::cin >> n;

    for (int i = 100; i <= n; i++) {
        if ((i % 10 + (i / 10) % 10 + (i / 100) % 10) < 10) {
            is_prime = true; 

            for (int j = 2; j < i; j++) {
                if (i % j == 0) { 
                    is_prime = false;
                    break; 
                }
            }
            
            if (is_prime) {
                std::cout << i << ' ';
            }
        }
    }
}
