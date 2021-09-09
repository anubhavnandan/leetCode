//C++ 11
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	   void Method(vector <int> &v){
	   	for(auto x : v)
	   	cout<<x;
	   	
	   //Member Function
	   cout<<'\n'<<v.front();
	   cout<<'\n'<<v.back();
	}
};
int main(){
int a[]={1,2,3,4,5};
vector <int> V(begin(a),end(a));

//Member Function
V.push_back(6);
V.insert(V.begin(),7);
V.pop_back();

Solution Obj;
Obj.Method(V);

//Sort
sort(V.begin(),V.end());
cout<<'\n';
Obj.Method(V);

//Binary Search
cout<<"\nSearch 5:"<<binary_search(V.begin(),V.end(),5);

//Merge
vector <int> M;
merge(V.begin(),V.end(),V.begin(),V.end(),back_inserter(M));
cout<<'\n';
Obj.Method(M);

//Swap
swap(V[0],V[1]);
cout<<'\n';
Obj.Method(V);

//Reverse
reverse(V.begin(),V.end());
cout<<'\n';
Obj.Method(V);




return 0;
}

