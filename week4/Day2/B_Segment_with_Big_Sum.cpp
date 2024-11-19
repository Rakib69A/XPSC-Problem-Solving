#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll sum = 0, ans = LLONG_MAX;
    ll l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum >= k && l <= r)
        {
            ans = min(ans, 1LL * (r - l + 1));
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout<<(ans == LLONG_MAX ? -1 : ans)<<endl;
    return 0;
}