#include <iostream>
#include <vector>
std::vector<long long> generateFibonacciModulo(int m)
{
    std::vector<long long> fibMod;
    fibMod.push_back(0);
    fibMod.push_back(1);
    int i=2;
    while (true)
    {   
        fibMod.push_back((fibMod[i - 1] + fibMod[i - 2]) % m);

        // Check for the Pisano period pattern
        if (fibMod[i] == 1 && fibMod[i - 1] == 0)
        {
            fibMod.pop_back();
            fibMod.pop_back();
            //fibMod.pop_back(); // Remove the repeating part from the end
            break;
        }
        i++;
    }

    return fibMod;
}
int main()
{  
    long long n;
    int m;
    std::cin>>n>>m;
    std::vector<long long> pisano=generateFibonacciModulo(m);
    std::cout<<pisano.at(n%pisano.size());
    return 0;
}