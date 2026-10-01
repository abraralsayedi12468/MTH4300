#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2};

    std::sort(v.begin(), v.end());
    // CHECKPOINT A v = {1, 1, 2, 3, 4, 5, 9}

    std::reverse(v.begin(), v.end());
    // CHECKPOINT B v= {9, 5, 4, 3, 2, 1, 1}

    std::replace(v.begin(), v.end(), 1, 99);
    // CHECKPOINT C v = {9, 5, 4 ,3, 2, 99, 99}

    return 0;
}