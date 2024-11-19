#include <iostream>
#include <string>

void calculateBullsAndCows(const std::string& secret, const std::string& guess, int& bulls, int& cows)
{
    bulls = 0;
    cows = 0;

    for (int i = 0; i < secret.size(); ++i)
    {
        if (guess[i] == secret[i]) 
        {
            ++bulls;
        }
        else 
        {
            for (int j = 0; j < secret.size(); ++j)
            {
                if (guess[i] == secret[j] && i != j)
                {
                    ++cows;
                    break;
                }
            }
        }
    }
}

int main()
{
    int digits;
    std::cout << "enter digits: ";
    std::cin >> digits;

    std::string secret;
    std::cout << "enter a secret number: ";
    std::cin >> secret;

    if (secret.size() != digits) 
    {
        std::cout << "secret num trqbwa da ima " << digits << " cifri" << std::endl;
        return 1;
    }

    std::string guess;
    int bulls = 0, cows = 0;

    while (bulls != digits)
    {
        std::cout << "enter a number: ";
        std::cin >> guess;

        if (guess.size() != digits)
        {
            std::cout << "chisloto trqbwa da ima " << digits << " cifri" << std::endl;
            continue;
        }

        calculateBullsAndCows(secret, guess, bulls, cows);
        std::cout << bulls << " bull(s), " << cows << " cow(s)" << std::endl;

        if (bulls == digits)
        {
            std::cout << "POZNA... +10% aura" << std::endl;
        }
    }
}
