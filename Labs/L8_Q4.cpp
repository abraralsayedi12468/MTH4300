// Snippet A , there is no base case, function repeatedly calls itself and cases a crash 
int count_down(int n) {
    std::cout << n << "\n";
    return count_down(n - 1);
}

// Snippet B , if should be (n==0) because this alogrithm doesnnt for factorial 0, so the alorgithm would run and get negative numbers and never reach 1 to stop. 
int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

// Snippet C, n + 1 make it so that base case is never met, so instead do n - 1
int sum_to(int n) {
    if (n == 0) return 0;
    return n + sum_to(n + 1); // supposed to sum 1..n
}

// Snippet D, fib should return fib(n - 1) + fib(n -2), you wnat the two previous numbers, not the adding the previous number twice. 
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 1); // typo
}