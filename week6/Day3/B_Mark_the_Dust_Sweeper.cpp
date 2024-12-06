#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    ll ans = 0;
    int p = 0;
    while(p < n && a[p] == 0)
        p++;
    for(int i = p; i < n-1; ++i){
        ans += a[i];
        if(a[i] == 0) ans++;
    }
    cout << ans << "\n";
}
int main(){
    int t; cin >> t;
    while(t--) solve();
}