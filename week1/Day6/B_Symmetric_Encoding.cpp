#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, s2;
        cin >> s;
        set<char> set;
        for (char c : s)
        {
            set.insert(c);
        }
        for (char c : set)
        {
            s2.push_back(c);
        }
        map<char, char> mp;
        int i = 0, j = s2.size() - 1;
        while (i <= j)
        {
            mp[s2[i]] = s2[j];
            mp[s2[j]] = s2[i];
            i++;
            j--;
        }
        for (auto c : s)
            cout << mp[c];
        cout << endl;
    }
    return 0;
}