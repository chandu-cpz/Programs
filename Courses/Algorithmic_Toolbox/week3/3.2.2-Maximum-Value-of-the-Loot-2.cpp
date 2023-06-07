#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    int W;
    cin >> n >> W;
    vector<pair<int, int>> weights(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> weights[i].first >> weights[i].second;
    }

    // Sorting based on the ratio of first/second
    std::sort(weights.begin(), weights.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.first == 0 || b.first == 0) {
            return a.first > b.first; // Move items with weight zero to the end
        }
        return static_cast<double>(a.second) / a.first < static_cast<double>(b.second) / b.first;
    });

    double curr = 0;
    double val = 0;
    int i = 0;
    while (W - curr > 0 && weights[i].second<W && i < n) {
        curr += weights[i].second;
        val += weights[i].first;
        ++i;
    }

    if (curr != W && i < n) {
        int remaining = W - curr;
        if (remaining < weights[i].second) {
            curr += remaining;
            val += (static_cast<double>(remaining) * (weights[i].first / static_cast<double>(weights[i].second)));

        }
    }

    printf("%.4f",val);
    return 0;
}
