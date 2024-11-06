#include <iostream>
bool perfection(int n) {
    int sum = 0;
    for (int j = 1; j < n; j++) {
        int a = n % j;
        if (a == 0 && j != n) {
            sum += j;
            
        }
    }
    return sum==n;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << (perfection(n) ? "true" : "false");
}