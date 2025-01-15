#include <iostream>

void fillOccurrencesArray(const char* str, unsigned* occurrences)
{
	if (!str || !occurrences)
	{
		return;
	}

	while (*str)
	{
		occurrences[*str - 'a']++;
		str++;
	}
}

bool canPalindromeBeFormed(unsigned* occurrences, size_t alphabetSize, char& oddOccurringCharacter)
{
	if (!occurrences)
	{
		return false;
	}
	oddOccurringCharacter = '\0';

	for (size_t i = 0; i < alphabetSize; i++)
	{
		if (occurrences[i] % 2 != 0)
		{
			if (oddOccurringCharacter != '\0')
			{
				return false;
			}
			oddOccurringCharacter = i + 'a';
		}
	}
	return true;
}

unsigned myStrlen(const char* str)
{
	if (!str)
	{
		return 0;
	}

	unsigned count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void appendCharacter(char*& str, char c, size_t amount)
{
	if (!str)
	{
		return;
	}

	for (size_t i = 0; i < amount; i++)
	{
		*str = c;
		str++;
	}
}

size_t buildLeftSide(char* str, unsigned* occurrences, size_t alphabetSize)
{
	if (!str || !occurrences)
	{
		return 0;
	}

	size_t size = 0;
	for (size_t i = 0; i < alphabetSize; i++)
	{
		if (occurrences[i] % 2 == 0)
		{
			size += occurrences[i] / 2;
			appendCharacter(str, i + 'a', occurrences[i] / 2);
			occurrences[i] /= 2;
		}
	}
	return size;
}

size_t buildRightSide(char* str, unsigned* occurrences, size_t alphabetSize)
{
	if (!str || !occurrences)
	{
		return 0;
	}

	size_t size = 0;
	for (int i = alphabetSize - 1; i >= 0; i--)
	{
		size += occurrences[i];
		appendCharacter(str, i + 'a', occurrences[i]);
		occurrences[i] /= 2;
	}
	return size;
}


char* getPalindrome(const char* first, const char* second)
{
	if (!first || !second)
	{
		return nullptr;
	}

	constexpr size_t ALPHABET_SIZE = 26;
	unsigned occurrences[ALPHABET_SIZE]{ 0 };
	fillOccurrencesArray(first, occurrences);
	fillOccurrencesArray(second, occurrences);

	char oddOccurringCharacter = '\0';
	if (!canPalindromeBeFormed(occurrences, ALPHABET_SIZE, oddOccurringCharacter))
	{
		return nullptr;
	}

	size_t palindromeSize = myStrlen(first) + myStrlen(second);
	char* palindrome = new char[palindromeSize + 1]; // '\0'!!!
	palindrome[palindromeSize] = '\0';

	size_t firstHalfSize = buildLeftSide(palindrome, occurrences, ALPHABET_SIZE);

	size_t secondHalfStart = firstHalfSize;
	if (oddOccurringCharacter)
	{
		char* oddStart = palindrome + firstHalfSize;
		appendCharacter(oddStart, oddOccurringCharacter, occurrences[oddOccurringCharacter - 'a']);
		
		secondHalfStart += occurrences[oddOccurringCharacter - 'a'];
		occurrences[oddOccurringCharacter - 'a'] = 0;
	}

	buildRightSide(palindrome + secondHalfStart, occurrences, ALPHABET_SIZE);

	return palindrome;
}

int main()
{
	size_t firstSize;
	std::cin >> firstSize;
	char* first = new char[firstSize + 1];
	std::cin >> first;

	size_t secondSize;
	std::cin >> secondSize;
	char* second = new char[secondSize + 1];
	std::cin >> second;

	char* palindrome = getPalindrome(first, second);
	if (palindrome)
	{
		std::cout << palindrome << std::endl;
	}
	else
	{
		std::cout << "No palindrome can be formed!";
	}

	delete[] first; // !!!
	delete[] second; // !!!
	delete[] palindrome; // !!!
}