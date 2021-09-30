//C++ 11
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		bool possible=false;
		if(s.length()==t.length()){
	        unordered_map<char,int> Magazine,Ransom;
	        
	        for(char x: s){
	        	if(Magazine.count(x)==0) Magazine.insert({x,1});
	        	else Magazine[x]+=1;
			}
			
			for(char x : t){
				if(Ransom.count(x)==0) Ransom.insert({x,1});
				else Ransom[x]+=1;
			}
			for(auto x : Ransom){
				if(x.second==Magazine[x.first])possible=true;
				else return false;
			}
		}	
		return possible;
    }
};
int main(){

Solution Obj;

cout<<Obj.isAnagram("ab","a");

return 0;
}

