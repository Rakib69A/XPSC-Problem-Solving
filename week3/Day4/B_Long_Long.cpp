#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    int cnt = 0;
    bool flag = false;

    for (int x : a)
    {
        sum += abs(x);
        if (x < 0 && !flag)
        {
            flag = true;
            cnt++;
        }
        if (x > 0)
        {
            flag = false;
        }
    }

    cout << sum << " " << cnt << "\n";
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