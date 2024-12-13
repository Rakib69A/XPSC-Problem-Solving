#include <bits/stdc++.h>
using namespace std;
const int N =1e2+10;
int n;
int a[N];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int res=a[1];
    for(int i=2;i<=n;i++)res&=a[i];
    cout<<res<<endl;
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