#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, const string &s)
{
    int r_colors = k;
    int w_cnt = 0;

    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
            w_cnt++;
    }

    r_colors = w_cnt;

    for (int i = k; i < n; i++)
    {

        if (s[i - k] == 'W')
            w_cnt--;

        if (s[i] == 'W')
            w_cnt++;

        r_colors = min(r_colors, w_cnt);
    }

    return r_colors;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        cout << solve(n, k, s) << endl;
    }
    return 0;
}
