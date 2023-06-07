#include<iostream>
int main(){
    int n;
    std::cin>>n;
    std::cout<<((int)(n/10)+(int)((n%10)/5)+(int)(n%5));
    return 0;
}