#include<iostream>
#include<cmath>
int main(){
    int n;
    std::cin>>n;
    long long z=((pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));
    std::cout<<z<<std::endl;
    return 0;
}