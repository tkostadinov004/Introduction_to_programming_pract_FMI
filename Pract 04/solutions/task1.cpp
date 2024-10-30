#include <iostream>
int main()
{
    int q;
    std::cin >> q;
    int a = q % 2;
    int b = q % 3;
    int c = q % 5;
    int d = q % 7;
    if (q == a || q == b || q==c || q==d) {
        std::cout << "prime";
    }
    else {
        if (a && b && c && d != 0) {
                std::cout << "prime";
            }
            else
                std::cout << "not prime";
    }
    
    
}