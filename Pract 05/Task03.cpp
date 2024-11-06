#include <iostream>

bool isNumPerfect(int n) {
    int leftover = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            leftover += i;
        }
    }
    return n == leftover;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << (isNumPerfect(n) ? "true" : "false");
}
