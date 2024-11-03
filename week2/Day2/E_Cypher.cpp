#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        int start;
        string move;
        cin >> start >> move;
        int cnt = 0;
        for (char c : move)
        {
            if (c == 'D')
                cnt++;
            else
                cnt--;
        }
        // cout<<"cnt : "<<cnt<<endl;
        int ans = 0;
        // cout<<"v["<<i<<"] = "<<v[i]<<endl;
        if (cnt >= 0)
        {
            ans = (v[i] + cnt) % 10;
        }
        else
        {
            ans = (v[i] + cnt)%10;
        }
        if(ans < 0) ans += 10;
        // cout<<"ans : "<<ans<<endl;
        cout<<ans<<" ";
        v.push_back(ans);
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