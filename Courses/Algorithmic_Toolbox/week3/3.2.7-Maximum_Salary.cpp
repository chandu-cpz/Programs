#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> str_num(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        str_num[i] = to_string(x);
    }

    sort(str_num.begin(), str_num.end(), [](string a, string b) {
        return (a + b) > (b + a);
    });

    string max_salary = "";
    for (auto i : str_num) {
        max_salary += i;
    }

    cout << (max_salary) << endl;

    return 0;
}
