#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for (int j=29; j>=0; j--)
        {
            ll cnt=0;
            for (int i=0; i<n; i++)
            {
                if (a[i]>=(1<<j)&&a[i]<(1<<(j+1)))
                {
                    cnt++;
                }
            }
            ans+=cnt*(cnt-1)/2;
        }
        cout<<ans<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}