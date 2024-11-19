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

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int lcmOfFour(int a, int b, int c, int d) 
{
    int lcmAB = lcm(a, b);
    int lcmABC = lcm(lcmAB, c);
    return lcm(lcmABC, d);
}

int main() 
{
    int a, b, c, d;
    std::cout << "vuvedete 4 chisla: ";
    std::cin >> a >> b >> c >> d;

    int result = lcmOfFour(a, b, c, d);
    std::cout << "naj malkoto obshto kratno e: " << result;s
}
