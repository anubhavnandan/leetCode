//C++ 11
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> dictionary;
        int maxWindowSize=0,currentWindowSize=0,windowStart=0,windowEnd=0;
        for(int i=0; i<s.size(); i++){
        	if(dictionary.count(s[i])>0){
        		if(dictionary[s[i]]>=windowStart)
        		windowStart=dictionary[s[i]]+1;
        		dictionary[s[i]]=i;
			}else{
				dictionary.insert({s[i],i});
			}
			windowEnd=i;
			currentWindowSize=windowEnd-windowStart+1;
//			cout<<s[i]<<" "<<windowEnd<<" "<<windowStart<<" "<<currentWindowSize<<" "<<endl;
			maxWindowSize=currentWindowSize>maxWindowSize ?   currentWindowSize : maxWindowSize;
		}
		return maxWindowSize;
    }
};
int main(){

Solution Obj;

cout<<Obj.lengthOfLongestSubstring("aabaab!bb");
//"abcabcbb"
//"bbbbb"
//"pwwkew"
//""
//"tmmzuxt"
//"dvdf"
//"aabaab!bb"
return 0;
}

