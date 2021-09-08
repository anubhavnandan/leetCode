//C++ 11
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
        int maxGlobal, currentMax;
        maxGlobal  =nums[0];
        currentMax = nums[0];
        for(auto i=1; i<nums.size(); i++){
        		currentMax = max(nums[i],currentMax+nums[i]);
			if(maxGlobal < currentMax)
				maxGlobal = currentMax;
		}
		return maxGlobal;
    }
};
int main(){
int a[] = {-2,1,-3,4,-1,2,1,-5,4};
vector <int> V(begin(a),end(a));
Solution Obj;

cout<<Obj.maxSubArray(V);

return 0;
}

