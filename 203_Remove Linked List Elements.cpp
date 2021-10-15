//C++ 11
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        head->next=removeElements(head->next,val);
        return head->val == val ? head->next : head;
    }
};
int main(){

Solution Obj;

Obj.Method();

return 0;
}

