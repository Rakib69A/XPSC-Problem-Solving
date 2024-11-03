#include <bits/stdc++.h>
using namespace std;
bool solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n != 5)
        return false;

    map<char, bool> mp;
    string newString = "";
    bool flag = true;

    for (char c : s)
    {
        if (mp[c])
        {
            return false;
        }
        mp[c] = true;
        newString += c;
    }
    // cout<<newString<<endl;
    sort(newString.begin(), newString.end());
    // cout<<newString<<endl;
    if (newString == "Timru")
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}