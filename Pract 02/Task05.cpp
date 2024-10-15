
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
    //substract the numbers;
    //if they are equal we get 0, representing false
    //if not, we get number != 0, representing true
    bool result = firstHalf - secondHalf;
    //we simply say !result to reverse the true and false
    std::cout << !result;
}

