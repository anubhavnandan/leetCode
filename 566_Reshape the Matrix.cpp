//C++ 11
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> result(r,vector<int>(c));
        vector<int> temp;
        int orignalRow=mat.size(), orignalCol=mat[0].size(),freeCounter=0;
        if(orignalRow*orignalCol==r*c){
        	for(auto i=0; i<orignalRow; i++){
        		for(auto j=0; j<orignalCol; j++){
        			temp.push_back(mat[i][j]);
				}
			}
			for(auto i=0; i<r; i++){
				for(auto j=0; j<c; j++){
					result[i][j]=temp[freeCounter];
					freeCounter++;
				}
			}
        return result;	
		}
        return mat;
    }
};
int main(){

vector<vector<int>> V{{1,2},{3,4}};
Solution Obj;

vector<vector<int>> result = Obj.matrixReshape(V,2,4);

for(auto i=0; i<result.size(); i++){
	for(auto j=0; j<result[i].size(); j++){
		cout<<result[i][j]<<" ";
	}
	cout<<endl;
}

return 0;
}

