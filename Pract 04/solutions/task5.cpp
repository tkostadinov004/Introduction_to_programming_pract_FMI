#include <iostream>
int main()
{
    int n;
    int min=0;
    int max = 0;
    double avg = 0;
    int temp;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        if (temp < min) min = temp;
        if (temp > max) max = temp;
        avg += temp;
    }
    avg /= n;
    std::cout << "min: "<< min << ", max: " << max << ", average: " << avg;

}