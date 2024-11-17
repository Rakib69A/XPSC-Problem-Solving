#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> diffs(n, 0);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll cur = (s[i] == 'L') ? i : n - i - 1;
        ll mx = (i > (n - i - 1)) ? i : (n - i - 1);
        sum += cur;
        ll diff = mx - cur;
        diffs[i] = diff;
    }

    sort(diffs.rbegin(), diffs.rend());

    for (int i = 0; i < n; i++)
    {
        sum += diffs[i];
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{

    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}