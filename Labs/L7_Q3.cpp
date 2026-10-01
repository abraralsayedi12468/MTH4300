#include <iostream> 
int main() {

    int limit = 5; 

    auto under = [limit](int x) {return x < limit; };
    auto over = [&limit](int x) { return x > limit; };

    limit = 10; 
    std::cout << under(7) << "\n" // false, so prints 0, 
    //because it takes orginal limit value and 7 is not less than 5 
    std::cout << over(7) << "\n" // false, so prints 0 
    //because it takes the mutated limit value which updates to 10, and 7 is not greater than 10 
    std::cout << under(3) << "\n" // true, so prints 1 
    //beacuse 3 is indeed less than 5 
    std::cout << over(15) << "\n" // true, so prints 1 
    //because 15 is indeed greater than 10 
    

    return 0; 
}

/*
0
0
1
1
*/