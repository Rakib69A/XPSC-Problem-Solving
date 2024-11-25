#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,n,x;
    cin>>a>>b>>n;
    long long ans = b;
    for(int i=0;i<n;i++){
        cin>>x;
        ans += min(x,a-1);
    }
    cout<<ans<<endl;
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