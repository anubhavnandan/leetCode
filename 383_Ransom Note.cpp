//C++ 11
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> Magazine,Ransom;
        bool possible=false;
        
        for(char x: magazine){
        	if(Magazine.count(x)==0) Magazine.insert({x,1});
        	else Magazine[x]+=1;
		}
		
		for(char x : ransomNote){
			if(Ransom.count(x)==0) Ransom.insert({x,1});
			else Ransom[x]+=1;
		}
		for(auto x : Ransom){
			if(x.second<=Magazine[x.first])possible=true;
			else return false;
		}
		
		return possible;
    }
};
int main(){

Solution Obj;

cout<<Obj.canConstruct("fihjjjjei","hjibagacbhadfaefdjaeaebgi");

return 0;
}

