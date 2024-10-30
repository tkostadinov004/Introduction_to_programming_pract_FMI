#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int first = 1;
    int second = 1;
    int third = 0;
    std::cout << first << " " << second << " ";
    for (int i = 2; i < n; i++) {
        third = first + second;
        std::cout << third << " ";
        first = second;
        second = third;
    }
}