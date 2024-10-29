#include <iostream>

int main() {
    int n, count[10] = { 0 }, maxCount = 0, mostFrequent = 0;
    std::cin >> n;

    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount || (count[i] == maxCount && i > mostFrequent)) {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    std::cout << mostFrequent << std::endl;
   
}
