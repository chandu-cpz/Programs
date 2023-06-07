#include<iostream>
#include<cmath>
long long last_digit_fibonacci(long n)
{
    long last_digit;
    long fn1 = 0;
    long fn = 1;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (long i = 1; i < n; i++)
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
int main(){
    long n;
    std::cin>>n;
    long long x=last_digit_fibonacci((n)%60+2)-1;
    (x<0)? std::cout<<9:std::cout<<x;
    return 0;
}