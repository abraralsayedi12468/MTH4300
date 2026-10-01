#include <iostream>
#include <vector>

int count_if_rec(const std::vector<int>& v, int target, int i) {
    if (i == static_cast<int>(v.size())) {
        return 0;
    }

    int match = 0;
    if (v[i] == target) {
        match = 1;
    }

    return match + count_if_rec(v, target, i + 1);
}

int count_target(const std::vector<int>& v, int target) {
    return count_if_rec(v, target, 0);
}

int main() {
    std::vector<int> v = {1, 2, 3, 2, 4, 2};

    std::cout << count_target(v, 2) << "\n";
    std::cout << count_target(v, 5) << "\n";

    return 0;
}