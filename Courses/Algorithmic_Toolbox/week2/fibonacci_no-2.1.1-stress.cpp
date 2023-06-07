#include <iostream>
#include <cmath>
long long fibonacci_naive(int n)
{
    if (n <= 1)
        return n;
    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}
int main()
{

    while (true)
    {
        int n;
        std::cout << "the is n: ";
        std::cout << n << std::endl;
        long long z = ((pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
        std::cout << z << std::endl;
        long long x = fibonacci_naive(n);
        std::cout << x << std::endl;
        if (x == z)
        {
            std::cout << "OK!" << std::endl;
            n++;
        }
        else
        {
            std::cout << "ERROR!" << std::endl;
            std::cout << n;
            break;
        }
    }
    return 0;
}