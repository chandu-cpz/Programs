#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
bool in_range(int x, int a, int b)
{
    if (x >= a && x <= b)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> segments(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> segments[i].first >> segments[i].second;
    }
    sort(segments.begin(), segments.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second < b.second; }); // sort the line segments from left to right
    int no_min_points=0;              // integer to store the min_no_of _pounst it took to cover all segments
    vector<int> points;             // vector to store the points that are used
    vector<bool> covered(n, false); // vector to check wheather the point is coovered
    for (int i = 0; i < n; ++i)
    {
        if (!covered[i])
        {
            for (auto k : points)
            {
                if (in_range(k, segments[i].first, segments[i].second))
                {
                    covered[i] = true;
                    break;
                }
            }
            if (!covered[i])
            {
                no_min_points++;
                points.push_back(segments[i].second);
                covered[i] = true;
            }
        }
    }
    cout << no_min_points << endl;
    for (auto i : points)
    {
        cout << i << " ";
    }
    return 0;
}