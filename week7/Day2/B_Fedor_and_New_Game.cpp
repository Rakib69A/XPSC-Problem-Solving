#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(m+1);
    for(int i=0;i<=m;i++)
        cin>>a[i];
    int ones = 0, ans = 0;
    for(int i=0;i<m;i++){
        ones = 0;
        int xor_val = (a[m]^a[i]);
        // cout<<xor_val<<" -> ";
        for(int k=n-1;k>=0;k--){
            if((xor_val >> k) & 1){
                ones++;
                // cout<<1<<" ";
            }
            // else cout<<0<<" ";
        }
    // cout<<endl;
    // cout<<ones<<endl;
    if(ones <= k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}