#include <iostream>

int reverse(int num) {
    int revNum = 0;
    while(num > 0) {
        revNum = revNum*10 + num%10;
        num /= 10;
    }

    return revNum;
}

int main() {
    std::cout << reverse(1101);
    return 0;
}