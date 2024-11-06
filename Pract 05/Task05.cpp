#include <iostream>

int concatNums(int n1, int n2) {
    int n2Duplicate = n2;
    while (n2Duplicate > 0) {
        n1 *= 10;
        n2Duplicate /= 10;
    }
    return n1 + n2;
}


int main()
{
    int x, y;
    std::cin >> x >> y;
    std::cout << concatNums(x,y);
}
