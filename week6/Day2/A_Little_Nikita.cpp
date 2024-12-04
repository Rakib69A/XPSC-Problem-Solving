#include <bits/stdc++.h>
using namespace std;
void solve()
{
     int n, m;
    cin >> n >> m;
    cout << (n >= m && (n%2) == (m%2) ? "Yes" : "No") << '\n';
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