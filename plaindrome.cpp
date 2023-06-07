//Check wheather the given integer is a plaindrome or not 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
    int reverse=0;
    while(temp!=0){
        int digit =temp%10;
        reverse=(reverse*10)+digit;
        temp=temp/10;
    }
    if(n==reverse){
        cout<<"Is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}