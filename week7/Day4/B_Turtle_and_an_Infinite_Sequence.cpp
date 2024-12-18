#include <bits/stdc++.h>
using namespace std;
int okey(int l, int r){
    int temp = 0;
    for(int i=31;i>=0;i--){
        int x = ((1<<i)&l) ? 1 : 0;
        int y = ((1<<i)&r) ? 1 : 0;

        if(x^y){
            temp = (1<<i);
            temp |= (temp-1);
            break;
        }
    }
    return l|temp;
}
void solve(){
    int n,m;
    cin>>n>>m;
    int ans = okey(max(0,n-m),n+m);
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