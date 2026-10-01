#include <iostream>
#include <string>

bool is_palindrome(const std::string& s, int lo, int hi) {
    if (lo >= hi) {
        return true;
    }

    if (s[lo] == s[hi]) {
        return is_palindrome(s, lo + 1, hi - 1);
    } else {
        return false;
    }
}

bool is_palindrome(const std::string& s) {
    int last_index = static_cast<int>(s.size()) - 1;
    return is_palindrome(s, 0, last_index);
}

int main() {
    std::cout << is_palindrome("racecar") << "\n";
    std::cout << is_palindrome("hello") << "\n";
    std::cout << is_palindrome("a") << "\n";
    std::cout << is_palindrome("") << "\n";

    return 0;
}