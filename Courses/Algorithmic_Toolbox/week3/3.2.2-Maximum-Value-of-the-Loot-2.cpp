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
    vector<pair<int, int> > weights(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> weights[i].first >> weights[i].second;
    }

    // Sorting based on the ratio of first/second
    sort(weights.begin(), weights.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.first == 0 || b.first == 0) {
            return a.first > b.first; // Move items with weight zero to the end
        }
        return static_cast<double>(a.second) / a.first < static_cast<double>(b.second) / b.first;
    });

    // for(auto i:weights){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<"Done Sorting ...."<<endl;
    double curr_W = 0;
    double val = 0;
    int i = 0;
    while(i<n && curr_W+weights[i].second<=W){
        curr_W+=weights[i].second;
        val+=weights[i].first;
        i++;
    }
    if(curr_W!=W){
        if(W-curr_W<weights[i].second){
            val+=((W-curr_W)*(static_cast<double>(weights[i].first)/static_cast<double>(weights[i].second)));
        }
    }
    printf("%.3f",val);
    return 0;
}
