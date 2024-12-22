#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> p(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        p[i]--;
    }

    int bad = 0;

    for (int i = 0; i < n; ++i)
    {
        if (p[i] % k != i % k)
        {
            bad++;
        }
    }

    if (bad == 0)
    {
        cout << 0 << endl;
    }
    else if (bad == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}