#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    deque<int> d(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    d.push_back(v[0]);
    string ans = "1";
    for(int i=1;i<n;i++){
        if(d.back()<= v[i] or d.front() >= v[i]){
            d.push_back(v[i]);
            ans += '1';
        }
        else ans += '0';
    }
    cout<<ans<<endl;
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