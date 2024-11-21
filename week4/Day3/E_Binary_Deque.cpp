#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    ll sum_of_value = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum_of_value += a[i];
    }
    if(sum_of_value < s){
        cout<<-1<<endl;
        return;
    }
    int l = 0,r = 0;
    ll sum = 0, ans = 0;
    while(r<n){
        sum += a[r];
        if(sum == s)
            ans = max(ans,1LL* (r-l+1));
        while(sum>s){
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout<<n-ans<<endl;
    
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