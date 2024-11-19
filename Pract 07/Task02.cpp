#include <iostream>

// biggest common divisor
int biggestCommonDivisor(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//least common multiple
int leastCommonMultiple(int a, int b) {
    return (a / biggestCommonDivisor(a, b)) * b;
}

// nok for 4 numbers
int lcm_of_four(int number1, int number2, int number3, int number4) {
    //first two numbers
    int lcm_ab = leastCommonMultiple(number1, number2);
    // (firts two numbers) + third
    int lcm_abc = leastCommonMultiple(lcm_ab, number3);
    // (first three numbers) + forth
    return leastCommonMultiple(lcm_abc, number4);
}

int main() {
    int number1, number2, number3, number4;
    std::cout << "Enter four numbers: ";
    std::cin >> number1 >> number2 >> number3 >> number4;

    int result = lcm_of_four(number1, number2, number3, number4);
    std::cout << "Least common multiple: " << result;
}
