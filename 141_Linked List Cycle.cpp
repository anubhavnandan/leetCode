//C++ 11
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	   bool hasCycle(ListNode *head) {
	   	ListNode * slow=head, *fast=head;
	   	while(fast && fast->next){
	   			slow =slow->next;
	   			fast =fast->next->next;
	   			if(slow == fast)return true;
		   }
        return false;
    }
};
int main(){

Solution Obj;

Obj.Method();

return 0;
}

