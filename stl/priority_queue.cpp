//C++ 11
#include<iostream>
#include<queue>

using namespace std;

class Solution {
public:
	   void Method(priority_queue <int> &pq){
		   	while(pq.size()>0){
			   	cout<<pq.top()<<'\n';
			   	pq.pop();
		    };
	   }
};
int main(){

priority_queue <int> PQ;

PQ.push(102);
PQ.push(1011);
PQ.push(10);
PQ.push(2);

Solution Obj;

Obj.Method(PQ);

return 0;
}

