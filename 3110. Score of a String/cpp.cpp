#include <string>
#include <iostream>

int scoreOfString(std::string s) {
    int score = 0;
    for(int i=0; i<s.length()-1; i++) {
            int diff = ((int) s[i] - (int) s[i+1] > 0) ? (int) s[i] - (int) s[i+1] : (int) s[i+1] - (int) s[i];
            score += diff;
    }
    return score;
}

int main() {
    std::cout << scoreOfString("hello");
}