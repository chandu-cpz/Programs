#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n <= 2) {
        cout << 1 << endl << n;
        return 0;
    }

    vector<int> summands;
    int k = 0;

    for (int i = 1; i <= n; i++) {
        if ((1LL * i * (i + 1)) / 2 > n) {
            k = i - 1;
            break;
        }
    }

    for (int i = 1; i < k; i++) {
        summands.push_back(i);
    }
    summands.push_back(n - ((1LL * k * (k - 1)) / 2));

    cout << summands.size() << endl;
    for (auto i : summands) {
        cout << i << " ";
    }

    return 0;
}
