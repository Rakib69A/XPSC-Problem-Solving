#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<char, int> mp;
    char ch = 'a';
    for (int i = 0; i < 26; i++)
        mp[ch++] = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto it : mp)
        {
            if (it.second == v[i]){
                cout<<it.first;
                mp[it.first]++;
                break;
            }
        }
    }
    cout<<endl;
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