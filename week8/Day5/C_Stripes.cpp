#include <bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve()
{
    char graph[8][8];
    vector<int> r;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 'R')
            {
                r.push_back(i);
            }
        }
    }
    for (int i : r)
    {
        bool ok = true;
        for (int j = 0; j < 8; j++)
        {
            if (graph[i][j] != 'R')
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "R\n";
            return;
        }
    }
    cout << "B\n";
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
}