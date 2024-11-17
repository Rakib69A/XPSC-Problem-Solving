#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> perm(n, vector<int>(n - 1));
    vector<int> freq(n + 1, 0), result(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> perm[i][j];
        }
        freq[perm[i][0]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == n - 1)
        {
            result[0] = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (perm[i][0] != result[0])
        {
            copy(perm[i].begin(), perm[i].end(), result.begin() + 1);
            break;
        }
    }

    for (int x : result)
        cout << x << ' ';
    cout << '\n';
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
