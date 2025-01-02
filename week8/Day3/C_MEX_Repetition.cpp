#include <bits/stdc++.h>
using namespace std;
int calculateMex(vector<int> v){
    unordered_set<int> s(v.begin(), v.end());
    int mex = 0;
    while(s.find(mex)!= s.end())
        mex++;
    return mex;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<int> v = {0,1,2,3};
    cout<<"Mex = "<<calculateMex(v)<<endl;
    return 0;
}