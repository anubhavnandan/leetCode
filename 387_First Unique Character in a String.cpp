//C++ 11
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	   int firstUniqChar(string s) {
        unordered_map<char,int> map;
        int uniqueIndex=INT_MAX,foundFirst;
        
        for(int i=0; i<s.size(); i++){
        	if(map.count(s[i]==0))
        	map.insert({s[i],1});
        	else
        	map[s[i]]+=1;
		}
		for(auto x: map){
			if(x.second==1){
				foundFirst=s.find_first_of(x.first);
				uniqueIndex=foundFirst<uniqueIndex ? foundFirst : uniqueIndex;
			}
		}
		return uniqueIndex==INT_MAX ? -1 : uniqueIndex;
    }
};
int main(){

	Solution Obj;
	
	cout<<Obj.firstUniqChar("leetcode");

return 0;
}

