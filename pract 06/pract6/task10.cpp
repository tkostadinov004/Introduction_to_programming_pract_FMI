#include <iostream>

bool permutationCheck(const char a[], const char b[], size_t n) {
    int charCount[26] = { 0 };
    for (size_t i = 0; i < n; i++) {
        charCount[a[i] - 'a']++;
    }
    for (size_t i = 0; i < n; i++) {
        charCount[b[i] - 'a']--;
    }
    for (size_t i = 0; i < 26; i++) {
        if (charCount[i] != 0) {
            return false;  
        }
    }
    return true;  
}
int main() {
    int n;
    std::cin >> n;
    char a[256];
    char b[256];
    for(int i = 0; i< n; i++) std::cin >> a[i];
    for (int i = 0; i < n; i++) std::cin >> b[i];
    if (n <= 256) {
        std::cout<<std::boolalpha << permutationCheck(a, b, n);
    }
    else {
        std::cout << "Invalid length\n";
    }
    return 0;
}
