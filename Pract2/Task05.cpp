
#include <iostream>

int main()
{
    //for numbers like 1234, one can use a smaller data type from int
    short number;
    std::cout << "Enter a number:";
    std::cin >> number;
    //let's slice the number and reverse the first half
    short firstHalf = (number % 10) * 10 + (number % 100) / 10;
    short secondHalf = (number - number % 100) / 100;
   /*in task 05 there is no rule not to use the ternary 
    operator or conditional operator*/
    std::cout << (firstHalf == secondHalf) ? 0 : 1;
}

