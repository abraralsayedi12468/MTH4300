#include <iostream>

int mystery(int n) {
    if (n <= 1) return n;
    return mystery(n - 1) + mystery(n - 2);
}

int main() {
    for (int i = 0; i <= 6; i++) {
        std::cout << mystery(i) << " ";
    }
    std::cout << "\n";

    return 0;
}

/*
0 1 1 2 3 5 8
*/