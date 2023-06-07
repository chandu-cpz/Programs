#include <iostream>
int last_digit_fibonacci(int n)
{
    int last_digit;
    int fn1 = 0;
    int fn = 1;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            last_digit = fn + fn1;
            if (last_digit > 1)
            {
                last_digit = last_digit % 10;
            }
            fn1 = fn;
            fn = last_digit;
        }
        return last_digit;
    }
}
int main()
{
    int n;
    std::cin >> n;
    std::cout<<last_digit_fibonacci(n);
}
