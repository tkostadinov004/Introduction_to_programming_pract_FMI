#include <iostream>


int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        ++count;
    }
    return count;
}

int getKthDigitFromLeft(int num, int k)
{
    int totalDigits = countDigits(num);
    if (k > totalDigits) 
    {
        return 0;
    }
    int divisor = 1;
    for (int i = 1; i <= totalDigits - k; ++i)
    {
        divisor *= 10;
    }
    return (num / divisor) % 10;
}

int replaceKthDigitFromLeft(int num, int k, int newDigit)
{
    int totalDigits = countDigits(num);
    if (k > totalDigits)
    {
        return num;
    }
    int divisor = 1;

    for (int i = 1; i <= totalDigits - k; ++i) 
    {
        divisor *= 10;
    }
    int currentDigit = (num / divisor) % 10;
    return num - currentDigit * divisor + newDigit * divisor;
}

void swapKthDigitsFromLeft(int m, int n, int k)
{
    int digitM = getKthDigitFromLeft(m, k);
    int digitN = getKthDigitFromLeft(n, k);

    m = replaceKthDigitFromLeft(m, k, digitN);
    n = replaceKthDigitFromLeft(n, k, digitM);

    std::cout << m << " " << n;
}

int main()
{
    int m, n, k;
    std::cout << "vuvedete dwe chisla i index: ";
    std::cin >> m >> n >> k;

    if (k <= 0) {
        std::cout << "indeksut trqbwa da e polojitelno chislo";
    }
    else {
        swapKthDigitsFromLeft(m, n, k);
    }
}
