#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};

    v.push_back(4); //appends 4, {1, 2, 3, 4}
    v.pop_back(); //pops the last elament {1, 2, 3}
    v.push_back(10); //adds 10 to list {1, 2, 3, 10}

    std::cout << v.size() << "\n"; // prints size of list 4
    std::cout << v.front() << "\n"; // prints first element 1
    std::cout << v.back() << "\n"; // prints last element 10
    std::cout << v[1] << "\n"; // prints elemnt at index 1, 2

    return 0;
}

/*

4
1
10
2

*/