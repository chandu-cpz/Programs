#include <iostream>
#include <cmath>
long long fibonacci(int n);
int main()
{
    while (true)
    {
        int n = rand() % 50;
        int last_digit;
        int fn1 = 0;
        int fn = 1;
        if (n <= 1)
        {
            last_digit=n;
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
            //std::cout << last_digit;
        }
        if(last_digit==(int)fibonacci(n)){
            std::cout<<"OK!\n";
        }
        else{
            std::cout<<"ERROR!\n";
            std::cout<<"The value of n is: "<<n<<"\n";
            std::cout<<"the last digit is : "<<last_digit<<"\n";
            std::cout<<"teh last digit is : "<<fibonacci(n)<<"\n";
            break;
        }

    }
}

long long fibonacci(int n)
{
    long long z = ((pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
    return z % 10;
}