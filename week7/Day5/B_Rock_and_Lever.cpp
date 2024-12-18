#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll ans = 0;
    for(int i=29;i>=0;i--){
        ll cnt = 0;
        for(int k=0;k<n;k++){
            if(a[k] >= (1<<i) and a[k] < (1<<(i+1)))
                cnt++;
        }
        ans += (cnt*(cnt-1))/2;
    }
    cout<<ans<<endl;
    
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