#include <bits/stdc++.h>     

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    vector<long long> g(a.begin(), a.begin() + 2);
    
    for(int i = 0; i < n; i++)
    {
        g[i % 2] = __gcd(g[i % 2], a[i]);
    }  
    
    vector<bool> v(2, true);
    
    for(int i = 0; i < n; i++)
    {
        v[i % 2] = v[i % 2] && (a[i] % g[(i % 2) ^ 1] > 0);
    }   
    
    long long res = 0;
    for(int i = 0; i < 2; i++)
        if(v[i])
            res = max(res, g[i ^ 1]);
            
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }
}
