#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
        cout << "Ramos" << endl;
    else
    {
        int cnt = 0;
        for (int i = 0; i < n-1; i += 2)
        {
            if (s[i] != s[i + 1])
                cnt++;
        }
        // cout << cnt << endl;
        if(cnt%2 == 0)  cout<<"Ramos"<<endl;
        else cout<<"Zlatan"<<endl;
    }

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