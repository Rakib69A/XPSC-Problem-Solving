#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a[1000];
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m + 1; i++)
        cin >> a[i];

    int cnt = 0;

    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
            if (((a[i] >> j) & 1) != ((a[m] >> j) & 1))
                t++;
        if(t <= k)
            cnt++;
    }

    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}