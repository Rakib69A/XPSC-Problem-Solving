#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,n,x;
    long long ans = 0;
    cin>>a>>b>>n;
    ans = b;
    for(int i=0;i<n;i++){
        cin>>x;
        ans += min(a-1, x);
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
