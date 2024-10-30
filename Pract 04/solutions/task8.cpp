#include <iostream>
int main()
{
    int n;
    int max = 0;
    int minMax = 0;
    int temp;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        if (temp > max) {
            max = temp;
        }
        if (minMax < temp && minMax < max) {
            if(max!=temp)
            minMax = temp;
        }
    }
    std::cout << "max: " << max << ", second max : " << minMax;

}