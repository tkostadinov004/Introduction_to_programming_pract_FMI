#include <iostream>

int main()
{
    int n = 0;

    int inp;

    std::cin >> n;

    int num = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> inp;
        if (inp % 2 == 0) {
            num = num * 10 + inp;
        }
    }
    std::cout << num;
}
