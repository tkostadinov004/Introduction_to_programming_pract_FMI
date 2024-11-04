#include <iostream>
bool IsTrue(int finalNum) {
    return finalNum % 11 == 0;
}
void FinalNum(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int n1 = i;
        int n2 = i;
        int n3 = i;
        int lastTwoDigits = (n1 / 10) % 10 * 10 + n2 % 10;
        int firstDigit = n3 / 1000;
        int finalNum = firstDigit * 100 + lastTwoDigits;
        if (IsTrue(finalNum))
        {
            std::cout << i << " ";
        }
    }
}
int main() {
    int a, b;
    std::cin >> a >> b;
    FinalNum(a, b);
}
