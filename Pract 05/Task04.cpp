#include <iostream>

int reverse(int n) {
    int result = n % 10;
    n /= 10;
    while (n > 0) {
        result *= 10;
        result += n % 10;
        n /= 10;
    }
    return result;
}

bool isPalindrome(int n) {
    return n == reverse(n);
}


int main()
{
    int n;
    std::cin >> n;
    std::cout << (isPalindrome(n) ? "true" : "false");
}
