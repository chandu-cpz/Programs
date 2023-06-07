#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{  
    int n;
    cin>>n;
    vector<long long> clicks(n);
    vector<long long> price(n);
    for(int i=0;i<n;++i){
        cin>>clicks[i];
    }
    for(int i=0;i<n;++i){
        cin>>price[i];
    }
    sort(clicks.begin(),clicks.end(),greater<int>());
    sort(price.begin(),price.end(),greater<int>());
    long long max_ad_money=0;
    for(int i=0;i<n;++i){
        max_ad_money+=clicks[i]*price[i];
    }
    cout<<max_ad_money;
    return 0;
}