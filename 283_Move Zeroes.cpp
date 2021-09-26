//C++ 11
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	   void moveZeroes(vector<int>& nums) {
        for(auto i=0,n=0; i<nums.size(); ++i){
        	if(nums[i]){
        		swap(nums[i],nums[n++]);
       		}
		}
    }
};
int main(){

int a[] = {0,0,1};
vector <int> V(begin(a),end(a));

Solution Obj;

Obj.moveZeroes(V);

for(auto x: V)
cout<<x<<" ";

return 0;
}

