//C++ 11
#include<iostream>

using namespace std;

class Solution {
public:
	bool isBadVersion(int n){
		return n==3 ? true : false;
	}
 	int firstBadVersion(int n) {
        return (isBadVersion(n)&&!isBadVersion(n-1)) ? n : firstBadVersion(n-1);
    }
};
int main(){

Solution Obj;

cout<<Obj.firstBadVersion(5);

return 0;
}

