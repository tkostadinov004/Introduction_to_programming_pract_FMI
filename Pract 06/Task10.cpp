#include <iostream>

bool arePermutations(char str1[], char str2[], int size1, int size2) {
    //must be same size
    if (size1 != size2) {
        return false;
    }
    //create templates for both arrays for a - z
    int count1[26] = { 0 };
    int count2[26] = { 0 };
    //fill the spots
    for (int i = 0; i < size1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    //compare
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}
int calculateLength(char arr[], int size) {
    while (arr[size] != '\0') {
        size++;
    }
    return size;
}
int main() {
    const unsigned int SIZE = 256;
    char str1[SIZE], str2[SIZE];

    std::cout << "Enter two strings: ";
    std::cin >> str1 >> str2;
    int size1, size2;

    //calculate the length of the first string
    size1 = calculateLength(str1 , 0);
    size2 = calculateLength(str2, 0);
   
    std::cout << std::boolalpha << arePermutations(str1, str2, size1, size2);
}
