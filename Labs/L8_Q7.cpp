#include <iostream>

int power_tail(int base, int exp, int acc = 1) {
    if (exp == 0) {
        return acc;
    }

    acc *= base;
    return power_tail(base, exp - 1, acc);
}

int main() {
    std::cout << power_tail(2, 10) << "\n";
    std::cout << power_tail(3, 4) << "\n";
    std::cout << power_tail(5, 0) << "\n";

    return 0;
}