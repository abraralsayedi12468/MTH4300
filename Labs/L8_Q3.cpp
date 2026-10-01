#include <iostream>

int power(int base, int exp) {
    if (exp == 0) return 1;
    if (exp % 2 == 0) {
        int half = power(base, exp / 2); // power(3, 6) -> half = power(3, 3) -> 27
        return half * half; // power(3, 3) * power(3, 3) -> 27*27 = 729 
    }
    return base * power(base, exp - 1); // 3 * power(3, 2) -> 3 * power(3, 1) * power(3,1) -> 3 * 3 *power(3, 0) * 3 * power(3,0) -> 3*3*3 = 27 (back to previous 2-lines)
}
int main() {
    std::cout << power(3, 6) << "\n";
    return 0;
}

/*
729 
*/
