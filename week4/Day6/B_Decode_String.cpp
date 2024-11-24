#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < n;)
    {
        if (s[i + 2] == '0' && s[i + 3] != '0')
        {
            ans += 96 + stoi(s.substr(i, 2));
            i += 3;
        }
        else
        {
            ans += 96 + (s[i] - '0');
            i++;
        }
    }
    cout << ans << endl;
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