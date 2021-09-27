//C++ 11
//Resize - On the fly
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> n0 = {1}, n1={1,1};
		
        if(numRows==1){
        	result.push_back(n0);
        	return result;
		}else if(numRows==2){
			result.push_back(n0);
			result.push_back(n1);
			return result;
		}else{
			result.push_back(n0);
			result.push_back(n1);
			result.resize(numRows);
			for(auto i=2;i<numRows; i++){
				for(auto j=0; j<i+1; j++){
					if(j==0||j==i){
						result[i].push_back(1);
					}else{
						result[i].push_back(result[i-1][j-1]+result[i-1][j]);
					}
				}
			}
		}
		return result;
    }
};
int main(){

Solution Obj;

vector<vector<int>> result = Obj.generate(30);
	for(auto i=0; i<result.size(); i++){
		cout<<"{"<<i<<"}";
		for(auto j=0; j<result[i].size(); j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}

return 0;
}

