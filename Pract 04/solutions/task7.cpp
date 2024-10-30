#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    if (n > 99 && n < 1000) {
        for (int q = 99; q < n; q++) {
            int a = q % 2;
            int b = q % 3;
            int c = q % 5;
            int d = q % 7;
            if (a && b && c && d != 0) {
                int temp = q %10;
                int temp2 = (q/10) % 10;
                int temp3 = q / 100;
                    if (temp + temp2 + temp3 < 10) {
                        std::cout << q << "  ";
                    }
            }
        }

    }
}