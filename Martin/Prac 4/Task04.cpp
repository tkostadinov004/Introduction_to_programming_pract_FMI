#include <iostream>

int main()
{
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, input;

    std::cin >> input;

    for (int i = 0; input > 0; i++)
    {
        if (input % 10 == 0) zero++;
        if (input % 10 == 1) one++;
        if (input % 10 == 2) two++;
        if (input % 10 == 3) three++;
        if (input % 10 == 4) four++;
        if (input % 10 == 5) five++;
        if (input % 10 == 6) six++;
        if (input % 10 == 7) seven++;
        if (input % 10 == 8) eight++;
        if (input % 10 == 9) nine++;

        input /= 10;
    }

    int mostRepeatingDigit = 0;
    int maxCount = zero;

    if (one > maxCount || (one == maxCount && mostRepeatingDigit < 1)) { maxCount = one; mostRepeatingDigit = 1; }
    if (two > maxCount || (two == maxCount && mostRepeatingDigit < 2)) { maxCount = two; mostRepeatingDigit = 2; }
    if (three > maxCount || (three == maxCount && mostRepeatingDigit < 3)) { maxCount = three; mostRepeatingDigit = 3; }
    if (four > maxCount || (four == maxCount && mostRepeatingDigit < 4)) { maxCount = four; mostRepeatingDigit = 4; }
    if (five > maxCount || (five == maxCount && mostRepeatingDigit < 5)) { maxCount = five; mostRepeatingDigit = 5; }
    if (six > maxCount || (six == maxCount && mostRepeatingDigit < 6)) { maxCount = six; mostRepeatingDigit = 6; }
    if (seven > maxCount || (seven == maxCount && mostRepeatingDigit < 7)) { maxCount = seven; mostRepeatingDigit = 7; }
    if (eight > maxCount || (eight == maxCount && mostRepeatingDigit < 8)) { maxCount = eight; mostRepeatingDigit = 8; }
    if (nine > maxCount || (nine == maxCount && mostRepeatingDigit < 9)) { maxCount = nine; mostRepeatingDigit = 9; }

    std::cout << mostRepeatingDigit;
}
