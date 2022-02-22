//C++ 11
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    unordered_map<int,int> mem;
	 int climbStairs(int n) {
        if(n>=0){
            if(n==1 || n==0){
                return 1;
            }else if(mem.count(n)>0){
                return mem[n];
            }else{
                int result = climbStairs(n-1)+climbStairs(n-2);
                mem[n]=result;
                return result;
            }
        }
        return 0;
    }
};
int main(){

Solution Obj;
cout<<Obj.climbStairs(3);

return 0;
}

