#include <iostream>

int gcd(int a, int b)
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdOfFour(int a, int b, int c, int d)
{
    int gcdAB = gcd(a, b);
    int gcdABC = gcd(gcdAB, c);
    return gcd(gcdABC, d);
}

int main() 
{
    int a, b, c, d;
    std::cout << "vuvedete 4 chisla: ";
    std::cin >> a >> b >> c >> d;

    int result = gcdOfFour(a, b, c, d);
    std::cout << "naj golemiqt obsht delitel e: " << result;
}
