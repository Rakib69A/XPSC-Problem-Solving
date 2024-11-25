#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back({s[i] - 'a' + 1, i + 1});
        }

        if (s[0] > s[n - 1])
        {
            sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b)
                 {
                     if (a.first == b.first)
                         return a.second < b.second;
                     return a.first > b.first; });
        }
        else
        {
            sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b)
                 {
                     if (a.first == b.first)
                         return a.second < b.second;
                     return a.first < b.first; });
        }

        vector<int> ans;
        int cost = 0;
        bool started = false;
        int prev = 0;

        for (int i = 0; i < n; i++)
        {
            pair<int, int> p = v[i];
            if (p.second == 1)
            {
                started = true;
                prev = p.first;
                ans.push_back(p.second);
            }
            else if (started)
            {
                cost += abs(prev - p.first);
                prev = p.first;
                ans.push_back(p.second);
            }

            if (p.second == n)
                break;
        }

        cout << cost << " " << ans.size() << endl;
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
