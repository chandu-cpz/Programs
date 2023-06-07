#include <iostream>

int last_digit_sum_squares_fibonacci(long long n) {
    if (n <= 0) {
        return 0;
    }

    int fn2 = 0; // Fibonacci number at index n-2
    int fn1 = 1; // Fibonacci number at index n-1
    int sum = fn1 * fn1; // Initial sum with the square of the Fibonacci number at index n-1

    // Calculate Fibonacci numbers up to n and update the sum
    for (long long i = 2; i <= n; i++) {
        int fn = (fn1 + fn2) % 10; // Calculate the next Fibonacci number and take the modulo 10
        fn2 = fn1;
        fn1 = fn;

        sum = (sum + (fn1 * fn1) % 10) % 10; // Add the square of the current Fibonacci number to the sum
    }

    return sum;
}

int main() {
    long long n;
    std::cin >> n;
    std::cout << last_digit_sum_squares_fibonacci(n%60) << std::endl;
    return 0;
}
