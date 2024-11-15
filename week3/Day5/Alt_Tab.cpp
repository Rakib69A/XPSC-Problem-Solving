
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    
    vector<string> v;
    string ans;

    unordered_map<string, int> mp;
    for(int i = 0; i < t; i++)
    {
        string st;
        cin >> st;
        
        v.push_back(st);
    }
    
    for(int i = t - 1; i >= 0; i--)
    {
        if(mp[v[i]] == 0)
        {
            int sz = v[i].size();
            ans += v[i].substr(sz - 2, sz - 1);
        }
        mp[v[i]]++;
    }
    cout << ans << endl;
	return 0;
}