#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    string rev = s;
    reverse(rev.begin(),rev.end());
    cout<< min(s,rev+s)<<endl;
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