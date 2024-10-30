#include <iostream>
int main()
{
    int n;
    int num=0;
    int temp;
    std::cin >> n; 
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        if (temp % 2 == 0) {
            num = num * 10;
            num += temp;
        }
    }
    std::cout << num;
    
}