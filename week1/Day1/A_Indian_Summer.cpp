#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, vector<string>> mp;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s1].push_back(s2);
    }
    set<string> set;
    int distinct = 0;
    for (const auto &pair : mp)
    {
        // cout << pair.first << " : ";
        for (const auto &color : pair.second)
        {
            // cout << color << " ";
            set.insert(color);
        }
        distinct += set.size();
        set.clear();
        // cout << endl;
    }
    cout << distinct << endl;
    return 0;
}