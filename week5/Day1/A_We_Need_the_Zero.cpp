#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> a(n);
    int XOR = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        XOR ^= a[i];
    }
     
    int x = (n%2==0 ? (XOR==0 ? 0 : -1): XOR);
    cout<<x<<endl;
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