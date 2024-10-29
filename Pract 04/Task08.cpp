#include <iostream>

int main() {
    int n, lowest_num, highest_num, second_highest_num;
    std::cin >> n;
    lowest_num = -2147483648;
    highest_num = second_highest_num = lowest_num;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        
        if (num > highest_num) {
            second_highest_num = highest_num;
            highest_num = num;
        }
        
        else if (num > second_highest_num && num != highest_num) {
            second_highest_num = num;
        }
    }
    
    second_highest_num == lowest_num ? second_highest_num = highest_num : second_highest_num;
    
    std::cout << highest_num << ' ' << second_highest_num;
}
