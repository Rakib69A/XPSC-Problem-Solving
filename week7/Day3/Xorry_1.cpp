#include <bits/stdc++.h>
using namespace std;
int powerOf2(int n){
    if(n < 1)
        return 0;
    int res = 1;
    for(int i=0;i < (1 << i);i++){
        int curr = 1 << i;
        if(curr > n)
            break;
        res = curr;
    }
    return res;
}
void solve(){
    int n;cin>>n;
    int msb = powerOf2(n);
    cout<<(msb^n)<<" "<<msb<<endl;
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