//C++ 11
#include<iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	int i=0,j=0;
    	
        while(true){
        	if(j<=n){
        		if(nums1[i]>nums2[j] && nums2[i] > 0){
        			nums1.emplace(nums1.begin()+1,nums2[j]);
        			i++;
        			j++;
				}else if(nums1[i]<=nums2[j] && nums1[i] > 0){
					i++;
				}
			}
		}
    }
};
int main(){
int a[] = {1,2,3,0,0,0};
int b[] = {2,5,6};
vector <int> V(begin(a),end(a));
vector <int> W(begin(b),end(b));

Solution Obj;

Obj.merge();

return 0;
}

