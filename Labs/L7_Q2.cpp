#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {5, 10, 15, 20};

    auto it = v.begin();
    std::cout << *it << "\n"; // starts at index one v[0], prints 5
    ++it;
    std::cout << *it << "\n"; // moves up one index to v[1], prints 10 
    it += 2;
    std::cout << *it << "\n"; // moves index 2 places to v[3], prints 20 
    --it;
    std::cout << *it << "\n"; // moves back one index to v[2], prints 15 

    return 0;
}

/*
5
10
20
15
*/