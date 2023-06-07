#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x = 0;
    while (x < 20)
    {
        int n = rand() % 100;

        vector<int> summands;
        int current = 1;

        while (n > 0)
        {
            if (n <= 2 * current)
            {
                summands.push_back(n);
                break;
            }
            summands.push_back(current);
            n -= current;
            current++;
        }

        cout << summands.size() << endl;
        for (auto i : summands)
        {
            cout << i << " ";
        }
        ++n;
    }
    return 0;
}
