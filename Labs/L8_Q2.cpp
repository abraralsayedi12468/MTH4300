#include <iostream>

bool is_even(int n);
bool is_odd(int n);

bool is_even(int n) {
    if (n == 0) return true;
    return is_odd(n - 1);
}

bool is_odd(int n) {
    if (n == 0) return false;
    return is_even(n - 1);
}

int main() {
    std::cout << is_even(3) << "\n"; // line A false, travels from is_even(3) to is_odd(2) to is_even(1) to is_odd(0) and then returns false
    std::cout << is_odd(3) << "\n";  // line B true, travels from is_odd(3) to is_even(2) to is_odd(1) to is_even(0) and then returns true 
    std::cout << is_even(0) << "\n"; // line C true, is_even(0) returns true
    std::cout << is_odd(1) << "\n";  // line D true  travels from is_odd(1) to is_even(0) and returns true 

    return 0;
}

/*
0
1
1
1
*/