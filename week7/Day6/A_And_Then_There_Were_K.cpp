#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int x = log2(n);
    cout<<((1<<x)-1)<<endl;
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