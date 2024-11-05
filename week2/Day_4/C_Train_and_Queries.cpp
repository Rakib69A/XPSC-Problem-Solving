#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, int> miniindex;
    map<int, int> maxiindex;

    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        if (miniindex[arr[i]] == 0)
            miniindex[arr[i]] = i;

        maxiindex[arr[i]] = i;
    }
    int a, b;
    while (k--)
    {
        cin >> a >> b;
        if (maxiindex[b] != 0 && miniindex[a] != 0 && maxiindex[b] - miniindex[a] >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    ;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}