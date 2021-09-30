//C++ 11
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> uniqueSubString;
        int maxWindowSize=0,currentWindowSize=0;
        for(int i=0; i<s.size(); i++){
        	if(uniqueSubString.count(s[i])>0){
        		++currentWindowSize;
        		currentWindowSize=currentWindowSize - uniqueSubString[s[i]];
        		uniqueSubString[s[i]]=currentWindowSize;
			}else{
				++currentWindowSize;
				uniqueSubString.insert({s[i],currentWindowSize});
			}
			maxWindowSize=maxWindowSize>currentWindowSize ?  maxWindowSize : currentWindowSize;
		}
		return maxWindowSize;
    }
};
int main(){

Solution Obj;

cout<<Obj.lengthOfLongestSubstring("tmmzuxt");
//abcabcbb
//bbbbb
return 0;
}

