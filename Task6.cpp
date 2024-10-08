#include <iostream>

int main()
{
    long long egn;

    std::cout << "Type your EGN: ";
    std::cin >> egn;

    if (egn >= 100000000 && egn <= 9999999999) {

        int hidden_egn = egn % 1000;
        std::cout << "*******" << hidden_egn;
    }
    else {
        std::cout << "Wrong EGN, please try again: ";
    }
}