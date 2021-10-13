//C++ 11
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int row=-1,col=-1;
	        for(int i=0; i<matrix.size(); i++){
	        	for(int j=0; j<matrix[i].size(); j++){
					if(i==j){
			        	if(target==matrix[i][j]) return true;
			        	else if(target<matrix[i][j] && i>0 && j>0){
			    			row=i-1;
			    			col=j-1;
			    			break;
						}
					}
				}
			}
	        if(row!=-1 && col!=-1){
	            for(int i=row; i<matrix.size(); i++){
	                if(target==matrix[i][col]) return true;
	            }
	            for(int j=col; j<matrix[row].size(); j++){
	                if(target==matrix[row][j]) return true;
	            }
	        }
	return false;
    }
};
int main(){

vector<vector<int>> V = {{1,4},{2,5}};
//{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
Solution Obj;
cout<<Obj.searchMatrix(V,2);

return 0;
}

