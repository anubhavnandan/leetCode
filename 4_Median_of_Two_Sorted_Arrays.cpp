//C++ 11
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==0){
            double a=nums1[floor(nums1.size()/2)-1];
            double b=nums1[ceil(nums1.size()/2)];
            //cout<<a<<" "<<b<<endl;
            return (double)(a+b)/2;
        }else{
            return (double)nums1[ceil(nums1.size()/2)];
        }
        return 0;
    }
};
int main(){
   vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};

Solution Obj;
cout<<Obj.findMedianSortedArrays(v1,v2);
return 0;
}