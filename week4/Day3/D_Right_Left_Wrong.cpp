#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;cin>>n;
    vector<ll> a(n), pre(n+5);
    for(int i=0;i<n;i++)
        cin>>a[i];
    pre[0] = a[0];
    for(int i=1;i<n;i++)
        pre[i] = pre[i-1] + a[i];
    string s;
    cin>>s;
    int l = 0, r = n-1;
    ll score = 0;
    while(l<r){
        if(s[l]=='L' && s[r] == 'R'){
            score += pre[r] - (l>0 ? pre[l-1] : 0);
            // cout<<score<<endl;
            l++;
            r--;
        }
        if(s[l]!='L')
            l++;
        if(s[r]!='R')
            r--;
    }
    cout<<score<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}