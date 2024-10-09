// Task 06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Чийзбургер - 8.25 лв.
    //Рибно меню - 12 лв.
    //Пилешки крилца - 10.99 л
    double burger = 8.25;
    double riba = 12;
    double krilca = 10.99;
    
    int broiburger, broiriba, broikrilca;
    std::cin >> broiburger >> broiriba >> broikrilca;
    double obshto = ((broiburger * burger) + (broiriba * riba) + (broikrilca * krilca));
                    //true = 1
    double desert = (obshto > 60) * (obshto * 0.1);
    std::cout << obshto + desert + 5;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
