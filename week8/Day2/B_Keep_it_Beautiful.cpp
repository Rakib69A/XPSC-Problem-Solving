#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        int nw_cnt = cnt + (!a.empty() && a.back() > x);
        if (nw_cnt == 0 || (nw_cnt == 1 && x <= a.front()))
        {
            a.push_back(x);
            cnt = nw_cnt;
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }
    cout << endl;
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