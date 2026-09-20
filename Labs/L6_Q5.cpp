#include <iostream>

int* make_range(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

int main() {
    int* range = make_range(5);
    for (int i = 0; i < 5; i++) {
    std::cout << range[i] << " ";
}

    std::cout << "\n";

    delete[] range;
    range = nullptr; 

    return 0;
}
