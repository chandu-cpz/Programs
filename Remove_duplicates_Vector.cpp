// A program to remove duplicates from a sorted vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 1, 2};
    auto i = nums.begin();
    while (i != nums.end() - 1)
    {
        if ((*i) == *(i + 1))
        {
            nums.erase(i);
        }
        else{
        ++i;
        }
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}