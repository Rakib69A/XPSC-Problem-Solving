#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    priority_queue<int> pq;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            if (pq.size() != 0)
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else
            pq.push(v[i]);
    }
    cout << ans << endl;
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