//C++ 11
#include<iostream>
#include<list>

using namespace std;

class Solution {
public:
	   void Method(list<int> doubleLinkedList){
	   	for(auto x : doubleLinkedList)
	   	cout<<x;
	   cout<<'\n';
	}
};

int main(){

list <int> dLL;
dLL.push_back(1);
dLL.push_front(0);
dLL.push_back(2);
dLL.insert(dLL.end(),3);

Solution Obj;

Obj.Method(dLL);

dLL.pop_back();
Obj.Method(dLL);

dLL.pop_front();
Obj.Method(dLL);

return 0;
}

