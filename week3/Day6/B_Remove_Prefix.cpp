#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
        
    unordered_set<int> seen;
    int result = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (seen.count(a[i]))
        {
            result = i + 1;
            break;
        }
        seen.insert(a[i]);
    }

    cout << result << endl;
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