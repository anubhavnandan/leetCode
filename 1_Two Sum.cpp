//C++ 11
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int> &nums, int target) {
		unordered_map<int, int> ht;
		vector<int> rV;
		for(auto i=0; i<nums.size(); i++){
			int req=target-nums[i];
			if(ht.count(req)>0){
				rV.push_back(ht[req]);
				rV.push_back(i);
				break;
			}
			ht[nums[i]]=i;
		}
        return rV;
	}
};
int main(){
int a[] = {2,7,11,15};
vector <int> V(begin(a),end(a));

Solution Obj;

vector<int> Output= Obj.twoSum(V,9);

for(auto x : Output)
	cout<<x;

return 0;
}

