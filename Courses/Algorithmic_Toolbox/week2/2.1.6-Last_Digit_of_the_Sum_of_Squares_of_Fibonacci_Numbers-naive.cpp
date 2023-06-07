#include<iostream>
using namespace std;

int last_digit_fibonacci(int n) {
    int last_digit;
    int fn1 = 0;
    int fn = 1;
    int last_digit_square = 0;

    if (n <= 1) {
        return n;
    }
    else {
        for (int i = 1; i < n; i++) {
            last_digit = (fn + fn1) % 10;
            fn1 = fn;
            fn = last_digit;
            last_digit_square = (last_digit_square + (last_digit * last_digit) % 10) % 10;
        }
        return last_digit_square;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int sum_of_squares_last_digit = last_digit_fibonacci(n)+1;

    std::cout << "The last digit of the sum of squares of Fibonacci numbers up to F" << n << "^2 is: " << sum_of_squares_last_digit << std::endl;

    return 0;
}
