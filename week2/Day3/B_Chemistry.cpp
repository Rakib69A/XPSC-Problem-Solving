#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    for(char c : s)
        mp[c]++;
    int odd = 0;
    for(auto val : mp){
        if(val.second % 2 != 0)
            odd++;
    }

    if(odd - 1 <= k)
        cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
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