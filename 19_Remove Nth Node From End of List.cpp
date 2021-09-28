//C++ 11
#include<iostream>

using namespace std;

struct ListNode {
	int 	 val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	   ListNode* removeNthFromEnd(ListNode* head, int n) {
	   	int c=0,i=1;
        ListNode* lookUp=head;
        while(lookUp) lookUp=lookUp->next, c++;    
        if(c==n) return head->next;
        for(lookUp=head; i<c-n; i++) lookUp=lookUp->next;
        lookUp->next=lookUp->next->next;
        return head;
	   }
};
int main(){

Solution Obj;

Obj.Method();

return 0;
}

