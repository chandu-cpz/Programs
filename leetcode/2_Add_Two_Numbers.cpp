#include <string>
#include <algorithm>
#include<iostream>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int num1 = 0;
        int num2 = 0;
        string num3 = "";
        int carry = 0;
        while ((l1 != nullptr) || (l2 != nullptr))
        {
            num1 = 0;
            num2 = 0;
            if ((l1 != nullptr))
            {
                num1 = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                num2 = (l2->val);
                l2 = l2->next;
            }
            // num3+=to_string(num1+num2);
            int numx = num1 + num2 + carry;
            cout << "The numx is: " << numx << endl;
            carry = 0;
            if (numx >= 10)
            {
                carry = 1;
                numx = numx % 10;
                num3 += to_string(numx);
            }
            else
            {
                num3 += to_string(numx);
            }
            cout << "The num3 is : " << num3 << endl;
        }
        if (carry)
        {
            num3 += to_string(carry);
        }
        /*while((l1!=nullptr)){
            num1+=to_string(l1->val);
            l1=l1->next;
        }
        while(l2!=nullptr){
            num2+=to_string(l2->val);
            l2=l2->next;
        }
        cout<<num1<<" "<<num2<<endl;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());*/
        // long int num3=stoll(num1)+stoll(num2);
        cout << "The number 3 si : " << num3 << endl;
        ListNode *head = nullptr;
        ListNode *curr = nullptr;
        /*if(num3==0){
            head=new ListNode(0);
        }*/
        while (num3.length() != 0)
        {
            if (head == nullptr)
            {
                // cout<<stoi(to_string(num3[0]));
                head = new ListNode(num3[0] - '0');
                num3.erase(0, 1);
                curr = head;
            }
            else
            {
                curr->next = new ListNode(num3[0] - '0');
                num3.erase(0, 1);
                curr = curr->next;
            }
        }
        return head;
    }
};