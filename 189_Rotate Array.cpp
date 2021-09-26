//C++ 11
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
int main(){
	int a[] = {1,2,3,4,5,6,7};
	vector <int> V(begin(a),end(a));
	
	Solution Obj;
	Obj.rotate(V,3);
	
	for(auto x: V)
	cout<<x<<" ";
return 0;
}

