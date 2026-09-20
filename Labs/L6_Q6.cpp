#include <iostream>

int** make_identity(int n) {
    int** matrix = new int*[n];

    for (int row = 0; row < n; row++) {
        matrix[row] = new int[n];
    }

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            if (row == column) {
                matrix[row][column] = 1;
            } else {
                matrix[row][column] = 0;
            }
        }
    }

    return matrix;
}

int main() {
    int n = 3;
    int** matrix = make_identity(n);

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            std::cout << matrix[row][column] << " ";
        }

        std::cout << "\n";
    }

    for (int row = 0; row < n; row++) {
        delete[] matrix[row];
    }

    delete[] matrix;
    matrix = nullptr;

    return 0;
}