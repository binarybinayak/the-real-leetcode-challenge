#include <iostream>

int isPalindrome(int x) {
    long int revX = 0;
    int n = x;
    while(n>0) {
        revX = revX*10 + n%10;
        n = n/10;
    }
    return x==revX;
}

int main() {
    std::cout << isPalindrome(121);
    return 0;
}