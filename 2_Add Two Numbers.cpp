//C++ 11
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * result=new ListNode(0);
        ListNode * c=result;
        int sum=0;
        while(l1!=NULL || l2!=NULL){
            sum/=10;
            if(l1 != NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2 != NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            c->next=new ListNode(sum%10);
            c = c->next;
        }
        if(sum/10==1)
            c->next = new ListNode(1);
        return result->next;
    }
};

int main(){

Solution Obj;

Obj.Method();

return 0;
}

