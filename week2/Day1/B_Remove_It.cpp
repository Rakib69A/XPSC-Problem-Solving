#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a;
    cin>>n>>a;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    auto it = remove(v.begin(), v.end(), a);
    v.erase(it,v.end());
    for(int val : v)
        cout<<val<<" ";
    cout<<endl;
    return 0;
}