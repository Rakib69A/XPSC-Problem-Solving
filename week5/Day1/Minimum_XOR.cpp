#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int XOR = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        XOR ^= a[i];
    }
    int ans = XOR;
    for(int i=0;i<n;i++){
        int currXOR = XOR^a[i];
        ans  = min(ans,currXOR);
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}