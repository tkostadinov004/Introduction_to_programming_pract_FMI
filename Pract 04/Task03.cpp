#include <iostream>
#include <cmath>

int main() {
    int bin_num;
    std::cin >> bin_num;
    int power = 0;
    int dec_num = 0;
  
    while (bin_num) {
        dec_num += (bin_num % 10) * pow(2, power);
        bin_num /= 10;
        power++;
    }
    
    std::cout << dec_num;
}
