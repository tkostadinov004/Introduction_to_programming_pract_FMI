#include <iostream>

int main() {
    int num, curr, counter, temp;
    int most_appearances = 0;
    int res = 0;
    std::cin >> num;
    
    while (num) {
        counter = 1;
        curr = num % 10;
        num /= 10;
        temp = num;
        
        while (temp) {
            temp % 10 == curr ? counter++ : temp;
            temp /= 10;
        }
        if (counter > most_appearances) {
            most_appearances = counter;
            res = curr;
        }
        else if (counter == most_appearances) {
            res < curr ? res = curr : res;
        }
    }
    
    std::cout << res;
}
