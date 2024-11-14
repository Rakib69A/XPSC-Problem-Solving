#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m),marge;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    
    int l = 0, r = 0;
    while(l < n && r < m){
        if(a[l] <= b[r]){
            marge.push_back(a[l]);
            l++;
        }
        else{
            marge.push_back(b[r]);
            r++;
        }
    }
    while(l < n){
        marge.push_back(a[l]);
        l++;
    }
    while(r < m){
        marge.push_back(b[r]);
        r++;
    }
    for(int val : marge)
        cout<<val<<" ";
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}