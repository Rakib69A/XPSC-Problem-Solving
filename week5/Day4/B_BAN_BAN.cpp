#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    cout<<n/2 + n%2<<endl;
    int l=1, r=n*3;
    while(l < r){
        cout<<l<<" "<<r<<" ";
        l += 3;
        r -= 3;
    }
    cout<<endl;
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