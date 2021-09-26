//C++ 11
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	   vector<int> sortedSquares(vector<int>& nums) {
	   	int S = nums.size();
        int l=0,r=S-1;
        vector<int> SS(S);
        for(auto k = S-1; k>=0; k--){
        	if(abs(nums[r])>abs(nums[l]))
        		SS[k]=nums[r]*nums[r--];
        	else
        		SS[k]=nums[l]*nums[l++];	
		}
        return SS;
    }
};
int main(){
	int a[] = {-7,-3,2,3,11};
	vector <int> V(begin(a),end(a));
	Solution Obj;
	
	V = Obj.sortedSquares(V);
	
	for(auto x : V){
		cout<<x<<" ";
	}
return 0;
}

