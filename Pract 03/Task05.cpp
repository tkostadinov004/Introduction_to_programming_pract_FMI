#include <iostream>

int main()
{
    int num1, num2, num3, num4, num5;
    std::cout << "Enter 5 numbers: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
    bool isTriple = false;
    if (num2 >= num3 && num2 >= num1 || num2 <= num3 && num2 <= num1) {
        if (num3 >= num2 && num3 >= num4 || num3 <= num2 && num3 <= num4) {
            if (num4 >= num3 && num4 >= num5 || num4 <= num3 && num4 <= num5) {
                isTriple = true;
                std::cout << "yes";
            }    
        }
    }
    if(!isTriple){
        std::cout << "no";
    }
   
}

