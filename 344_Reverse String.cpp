//C++ 11
//auto 56% int 99% faster execution
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {
        int j = s.size();
        for(int i=0; i<j/2; ++i){
        	swap(s[i],s[j-i-1]);
		}
		return;
    }
};
int main(){
	vector<char> V={'h','e','l','l','o'};
	Solution Obj;
	
	Obj.reverseString(V);
	for(auto x: V)
	cout<<x<<" ";
return 0;
}

