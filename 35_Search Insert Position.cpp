//C++ 11
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
 	int searchInsert(vector<int>& nums, int target) {
        int S = nums.size()-1;
        int mid,begin=0,end=S;  
        if(target<=nums[0])
                return 0;
        else if(target==nums[S])
            return S;
        else if(target>nums[S])
                return S+1;
        else{
        	mid=(begin+end)/2;
            while(mid>1 || mid<S){
                mid=(begin+end)/2;
                if(nums[mid]==target)
                    return mid;
                else if(target < nums[mid] && end != mid)
                    end=mid;
                else if(target > nums[mid] && begin !=mid)
                    begin=mid;
                else 
                    break;
            }
        }   
        return target>nums[mid]?mid+1:mid;
    }
};

int main(){

int a[] = {1,2,4,6,7};
vector <int> V(begin(a),end(a));

Solution Obj;
cout<<Obj.searchInsert(V,t);

return 0;
}

