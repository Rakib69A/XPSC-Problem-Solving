#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    multiset<int,greater<int>> ml;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(v[i] != 0)
            ml.insert(v[i]);
        else{
            if(ml.size() != 0){
                ans += *ml.begin();
                ml.erase(ml.begin());
            }
        }
    }
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