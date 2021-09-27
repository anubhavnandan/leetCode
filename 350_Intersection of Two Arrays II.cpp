//C++ 11
#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        unordered_map <int,int> map1,map2;
        for(auto x: nums1){
        	if(map1.count(x)>0){
        		map1[x]+=1;
			}else{
				map1.insert({x,1});
			}
		}
		for(auto x: nums2){
			if(map2.count(x)>0){
				map2[x]+=1;
			}else{
				map2.insert({x,1});
			}
		}
		
		int count=0,c1=0,c2=0;
		for(auto i=0; i<=1000; i++){
			c1=map1[i];
			c2=map2[i];
			if(c1!= 0 && c2 != 0){
				count=c1<=c2?c1:c2;
				while(count>0){
					result.push_back(i);
					count--;
				}
			}
		}
		return result;
    }
};
int main(){

int a[] = {4,9,5};
vector <int> V(begin(a),end(a));

int b[] = {9,4,9,8,4};
vector <int> W(begin(b),end(b));

Solution Obj;

vector <int> X = Obj.intersect(V,W);

for(auto x : X)
cout<<x<<" ";


return 0;
}

