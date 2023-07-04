#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int reverse(int x)
{
    string z;
    if (x < 0)
    {
        z = to_string(x) + "-";
    }
    else
    {
        z = to_string(x);
    }
    std::reverse(z.begin(), z.end());
    try{
        return stoi(z);
    }
    catch(out_of_range e){
        return 0;
    }
}
int main()
{
    int x = 1534236469;
    cout << reverse(x);
}
