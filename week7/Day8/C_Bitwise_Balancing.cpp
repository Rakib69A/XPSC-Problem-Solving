#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    map<tuple<ll, ll, ll>, ll> mp;
    mp[{0, 0, 0}] = 0;
    mp[{0, 0, 1}] = 1;
    mp[{0, 1, 0}] = 0;
    mp[{0, 1, 1}] = -1;
    mp[{1, 0, 0}] = -1;
    mp[{1, 0, 1}] = 0;
    mp[{1, 1, 0}] = 1;
    mp[{1, 1, 1}] = 0;
    while (t--)
    {
        ll a = 0, b, c, d;
        cin >> b >> c >> d;
       
        for (ll i = 60; i >= 0; i--)
        {
            int I = (((1ll << i) & b) != 0);
            int J = (((1ll << i) & c) != 0);
            int K = (((1ll << i) & d) != 0);
            int x = mp[{I, J, K}];
            if (x == -1)
            {
                a = -1;
                break;
            }
            else
                a += x * (1LL << i);
        }
        cout << a << endl;
    }
    return 0;
}