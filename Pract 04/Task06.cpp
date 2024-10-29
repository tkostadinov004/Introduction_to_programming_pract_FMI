#include <iostream>

int main()
{
    int n, next;
    std::cin >> n;
    
    std::cout << (n == 0 ? '0' : '1') << ' ';
    
    int prev = 1;
    int curr = 2;
    
    for (int i = 1; i < n; i++) {
        std::cout << prev << ' ';
        
        next = prev + curr;
        prev = curr;
        curr = next;
    }
}
