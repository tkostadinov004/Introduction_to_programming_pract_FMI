#include <iostream>

bool arePermutations(char arr1[], char arr2[], int length1 , int length2) {
    if (length1 != length2) {
        return false;
    }
    int count[26] = { 0 };
    for (int i = 0; i < length1; i++) {
        count[arr1[i] - 'a']++;
    }
    for (int i = 0; i < length2; i++) {
        count[arr2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    char arr1[256] = { 'a', 'b', 'c','d' };
    char arr2[256] = {'a','b', 'g','c'};
    int length1 = 4;
    int length2 = 4;
    if (arePermutations(arr1, arr2, length1,length2))
    {
        std::cout << "true\n";
    }
    else 
    {
        std::cout << "false\n";
    }
}
