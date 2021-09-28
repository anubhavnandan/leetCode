//C++ 11
#include<iostream>
#include<vector>

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
	ListNode* middleNode(ListNode* head) {
       int c=1;
       ListNode* middle=head;
       while(head->next != nullptr){
           head=head->next;
           c++;
       }
        c=(c/2==0)?(c/2):((c/2)+1);
        while(c>1){
            middle=middle->next;
            c--;
        }
        return middle;
    }
};
int main(){
	vector<int> a = {1,2,3,4,5};
	ListNode* head;
	
//	for(int x : a){
//		ListNode* temp = new ListNode(x),*ptr;
//		if(*head == NULL){
//			*head = temp;
//			cout<<head->val;
//		}else{
//			*ptr=*head;
//			while(ptr->next != nullptr)
//				ptr=ptr->next;
//			ptr->next = temp; 
//		}
//	}
//	while(head->next!=nullptr){
//		cout<<head->val<<" ";
//		head=head->next;
//		
//	}
	
	//Obj.middleNode();

return 0;
}

