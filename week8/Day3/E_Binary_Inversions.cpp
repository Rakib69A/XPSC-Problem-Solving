#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll invCount(int n,vector<int>& a){
    int one = 0, res = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 1) one++;
        else{
            res += one;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(auto& x : a) cin>>x;
        ll ans = invCount(n,a);
        int pos = -1;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                pos = i;
                a[i] = 1;
                break;
            }
        }
        ans = max(ans,invCount(n,a));
        if(pos != -1){
            a[pos] = 0;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i] == 1){
                pos = i;
                a[i] = 0;
                break;
            }
        }
        ans = max(ans,invCount(n,a));
        cout<<ans<<endl;
    }
    return 0;
}