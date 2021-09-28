//C++ 11
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
        	if(target>=matrix[i][0]){
        		for(int j=0; j<matrix[i].size(); j++){
        			if(target==matrix[i][j]) return true;
				}
			}
		}
		return false;
    }
};
int main(){

vector<vector<int>> V = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
Solution Obj;
cout<<Obj.searchMatrix(V,13);

return 0;
}

