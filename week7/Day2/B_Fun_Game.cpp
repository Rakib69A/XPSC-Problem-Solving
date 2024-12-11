#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s,t;
    cin>>s>>t;
    bool ok = false;
    for(int i=0;i<n;i++){
        if(s[i] == '1') ok = true;
        if(s[i]=='0' && t[i]=='1' && !ok){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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