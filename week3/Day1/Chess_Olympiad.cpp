#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    double score = X * 1.0 + Y * 0.5;
    int played = X + Y + Z;
    int remain = 4 - played;
    double op_score = Z * 1.0 + Y * 0.5;
    double max_score = score + remain * 1.0;

    if (max_score > op_score)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}