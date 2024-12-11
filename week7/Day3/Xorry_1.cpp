#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int msb = 1 << (int)log2(n);
    cout << (n ^ msb) << " " << msb << endl;
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