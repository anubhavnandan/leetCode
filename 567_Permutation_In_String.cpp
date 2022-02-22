//C++ 11
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_multiset<char> subStringSet;
        vector<unordered_multiset<char>> tempStringSet;

        for(auto x : s1){
            subStringSet.insert(x);
        }
        int subDivision=s1.size();
        cout<<subDivision<<endl;
        int counter=0,index=0;
        for(auto x : s2){
            cout<<x<<" ";
            tempStringSet[index].insert(x);
            counter==subDivision?(counter=0,index++):counter++;
        }

        cout<<endl;

        for(auto x : tempStringSet){
            for(auto c: x){
                cout<<c<<" ";
            }
            cout<<endl;
        }

        for(auto x:tempStringSet){
            if(x==subStringSet) return true;
        }
        return false;
    }
};
int main(){
   string s1,s2;
   s1="abo";
   s2="eidbaooo";
   Solution Obj;
   cout<<Obj.checkInclusion(s1,s2);
return 0;
}