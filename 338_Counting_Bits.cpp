//C++ 11
//Resize - On the fly
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> oneCounts;
        int i=0;

        while(i <= n){
           int tempOnes=0, tempNum=i;
            while(tempNum>0){
                if(tempNum%2==1)tempOnes++;
                tempNum/=2;
            }
            oneCounts.push_back(tempOnes);
            tempOnes=0;
            i++;
        }
        return oneCounts;
    }
};

int main(){

Solution Obj;

for(auto x: Obj.countBits(5))cout<<x<<" ";

return 0;
}

