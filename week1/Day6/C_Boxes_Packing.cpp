#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int mx = INT_MIN;
    for(auto x : mp){
        if(mx < x.second)
            mx = x.second;
    }
    cout<<mx<<endl;
    return 0;
}