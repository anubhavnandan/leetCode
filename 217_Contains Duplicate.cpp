//C++ 11
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> set;
        for(auto x : nums){
        	if(set.count(x)>0){
        		return true;
			}
			set.insert(x);	
		}
		return false;
    }
};
int main(){
int a []= {1,2,3,2};
vector<int> V(begin(a),end(a));

Solution Obj;
cout<<Obj.containsDuplicate(V);

return 0;
}

