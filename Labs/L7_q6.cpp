#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

std::vector<int> above_average(const std::vector<int>& v) {
    if (v.size() == 0) {
        return {};
    }
    double avg = static_cast<double>(std::accumulate(v.begin(), v.end(), 0)) / v.size();
    std::vector<int> new_list;
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it > avg) {
            new_list.push_back(*it);
        }
    }

    return new_list;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> result = above_average(v);

    for (int x : result) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}