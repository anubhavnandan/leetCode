//C++ 11
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[fast];
        }while(slow!=fast);
        return slow;
    }
};
int main(){

vector<int> a = {1,3,4,2,2};    
Solution Obj;
cout<<Obj.findDuplicate(a);
return 0;
}

