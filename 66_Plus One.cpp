//C++ 11
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> p1;
    vector<int> plusOne(vector<int> &digits)
    {
        int s = 0, c = 0;
        int start = digits.size() - 1;
        for (int i = start; i >= 0; i--)
        {
            if (i != start)
                s = digits[i] + c;
            else
                s = digits[i] + c + 1;
            s == 10 ? (s = 0, c = 1) : (c = 0);
            p1.insert(p1.begin(), s);
        }
        if(c==1)p1.insert(p1.begin(),1);
        return p1;
    }
};
int main()
{
    int a[] = {9};
    vector<int> V(begin(a), end(a));

    Solution Obj;

    vector<int> Output = Obj.plusOne(V);

    for (auto x : Output)
        cout << x;

    return 0;
}