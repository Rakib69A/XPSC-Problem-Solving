#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int ans = 0;
    for(int i=0;i<n;i++) ans=max(ans,a[i]-b[i]);
    for(int i=0;i<n;i++)
        a[i] = max(0,a[i]-ans);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}