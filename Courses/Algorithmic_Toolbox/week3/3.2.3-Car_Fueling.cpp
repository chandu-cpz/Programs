#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int compute_min_refills(int dist, int tank, const vector<int> &stops)
{
    int numRefills = 0;
    int currentRefill = 0;
    int lastRefill = 0;
    int n = stops.size() - 2;

    while (currentRefill <= n)
    {
        lastRefill = currentRefill;

        while (currentRefill <= n && stops[currentRefill + 1] - stops[lastRefill] <= tank)
            currentRefill++;

        if (currentRefill == lastRefill)
            return -1;

        if (currentRefill <= n)
            numRefills++;
    }

    return numRefills;
}

int main()
{
    int d;
    cin >> d;

    int m;
    cin >> m;

    int n;
    cin >> n;

    vector<int> stops(n);
    for (int i = 0; i < n; ++i)
        cin >> stops[i];

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
