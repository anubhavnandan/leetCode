//C++ 11
#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string reverseWords(string s) {
       int wordStart=-1,wordEnd=-1,length=s.length();
       for(int i=0; i<length; ++i){
	       	if(s[i]!=' '&&wordStart==-1){
	       		wordStart=i;
//	       		cout<<s[i]<<i;
			}
	    	else if((s[i]==' '||i==length-1)&&wordEnd==-1){
	    		wordEnd=(s[i]==' ')?i-1:i;
//	    		cout<<" "<<s[i]<<i<<endl;
			}
			if(wordStart!=-1 && wordEnd!= -1){
				while(wordStart<wordEnd){
					swap(s[wordStart],s[wordEnd]);
					wordStart++;
					wordEnd--;
				}
				wordStart=-1;
				wordEnd=-1;
			}
	    }
	   return s; 
    }
};
int main(){

string V = "Let's take LeetCode contes";
Solution Obj;

string result = Obj.reverseWords(V);

cout<<endl<<result;

return 0;
}

