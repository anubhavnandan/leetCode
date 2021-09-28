//C++ 11
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
	unordered_set<char> spectatorRow, spectatorCol,gridLeft,gridCenter,gridRight;
	char currentRow,currentCol;
    //Check Row & Col & Grid
	    for(int i=0; i<9; i++){
	    	for(int j=0; j<9; j++){
	    		//Row & Grid
	    		currentRow=board[i][j];
	    		if(currentRow!='.'){
					if(spectatorRow.count(currentRow)==0) spectatorRow.insert(currentRow);
					else return false;
					
					if(j<=2){
						if(gridLeft.count(currentRow)==0) gridLeft.insert(currentRow);
						else return false;
					}else if(j<=5){
						if(gridCenter.count(currentRow)==0) gridCenter.insert(currentRow);
						else return false;
					}else if(j<=8){
						if(gridRight.count(currentRow)==0) gridRight.insert(currentRow);
						else return false;
					}
				}
				//Col
				currentCol=board[j][i];
	    		if(currentCol!='.'){
					if(spectatorCol.count(currentCol)==0) spectatorCol.insert(currentCol);
					else return false;
				}
			}
			if(i==2 || i==5){
				gridLeft.clear();
				gridCenter.clear();
				gridRight.clear();
			}
			spectatorRow.clear();
			spectatorCol.clear();
		}
	return true;
    }
};
int main(){

vector<vector<char>> V ={
 {'5','3','.','.','7','.','.','.','.'}
,{'6','5','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};

Solution Obj;
cout<<Obj.isValidSudoku(V);

return 0;
}

