//C++ 11
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int,int> lookUp;
        vector<int> result;
        int required;
		for(auto i=0; i<numbers.size(); ++i){
			required=target-numbers[i];
			if(lookUp.count(required)){
				result.push_back(lookUp[required]+1);
				result.push_back(i+1);
				break;
			}else{
				lookUp.insert({numbers[i],i});
			}
		}
		return result; 
    }
};

int main(){

int a[] = {2,7,11,15};
vector <int> V(begin(a),end(a));
int t = 9;

Solution Obj;

vector<int> R = Obj.twoSum(V,t);
for(auto x : R)
cout<<x<<" ";

return 0;
}

