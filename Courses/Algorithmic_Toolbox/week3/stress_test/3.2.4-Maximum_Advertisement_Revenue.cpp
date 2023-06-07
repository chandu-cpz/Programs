#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
long long int MaxDotProduct(int A[], int B[], int m, int n)
{
    long long int dp[n + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= m; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            dp[j] = max(dp[j], dp[j - 1] + (A[i - 1] * B[j - 1]));
            // Calculate the maximum dot product at position j
            // by choosing between not including B[j-1] and including B[j-1]
            // Update dp[j] with the maximum value
        }
    }

    return dp[n]; // Return the maximum dot product
}
int main()
{
    int n;
    n = rand() % 10;
    cout << n << endl;
    vector<int> clicks(n);
    vector<int> price(n);
    for (int i = 0; i < n; ++i)
    {
        clicks[i] = rand() % 10000;
    }
    for (int i = 0; i < n; ++i)
    {
        price[i] = rand() % 100000;
    }
    sort(clicks.begin(), clicks.end());
    sort(price.begin(), price.end());
    for (int i = 0; i < n; ++i)
    {
        cout << clicks[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << price[i] << " ";
    }
    cout << endl;
    int max_ad_money = 0;
    for (int i = 0; i < n; ++i) 
    {
        max_ad_money += clicks[i] * price[i];
    }
    cout << max_ad_money;
    int A[] = {2, 3, 1, 7, 8};
    int B[] = {3, 6, 7};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
    cout << MaxDotProduct(A, B, m, n);
    return 0;
}