#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> l(n * (n - 1) / 2);
    for (int i = 0; i < l.size(); ++i)
    {
        cin >> l[i];
    }

    sort(l.begin(), l.end());

    int j = 0;
    for (int i = n - 1; i > 0; --i)
    {
        cout << l[j] << " ";
        j += i;
    }
    cout << l.back() << endl;
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