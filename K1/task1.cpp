#include <iostream>
unsigned fromSystemToDecimal(unsigned num, unsigned base)
{
    unsigned result = 0;
    unsigned mult = 1;
    while (num > 0)
    {
        result += mult * (num % 10);
        num /= 10;
        mult *= base;
    }
    return result;
}
void reverse(int arr[], size_t size)
{
    for (size_t i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
size_t fromDecimalToSystem(unsigned num, int output[], unsigned outputBase)
{
    if (num == 0)
    {
        return 1;
    }

    size_t resultSize = 0;
    while (num > 0)
    {
        output[resultSize++] = num % outputBase;
        num /= outputBase;
    }
    reverse(output, resultSize);
    return resultSize;
}
size_t fromSystemToSystem(unsigned input, unsigned inputSystemBase, int output[], unsigned outputSystemBase)
{
    unsigned systemToDecimal = fromSystemToDecimal(input, inputSystemBase);
    size_t resultSize = fromDecimalToSystem(systemToDecimal, output, outputSystemBase);
    return resultSize;
}
void print(const int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}
int main()
{
    constexpr size_t MAX_OUTPUT_SIZE = 32;
    int output[MAX_OUTPUT_SIZE]{ 0 };
    unsigned num, in, out;
    std::cin >> num >> in >> out;
    size_t size = fromSystemToSystem(num, in, output, out);
    print(output, size);
}
