#include <iostream>
#include <string>
#include <stack>
#include<map>
using namespace std;
bool validator(string s){
    stack<char> st;
    map<char, char> map;
    map[']']='[';
    map['}']='{';
    map[')']='(';
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if ( map[s[i]]== st.top())
            {
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
       return false;
    }
}
int main()
{
    string s = "]";
    if(validator(s)){
        cout<<"valid";
    }
    else{
        cout<<"Invalid";
    }
    return 0;
}