#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int gp = 0;
    int b = 0;
    string ans = "";
    int l = 0, r = n-1;
    while(l<r){
        if(s[l] == s[r]) gp += 2;
        else  b++;
        l++,r--;
    }
    for(int i=0;i<=n;i++){
        int total = i;
        total -= b;
        if(total < 0){
            ans += '0';
            continue;
        }
        total = max((total%2),total-gp);
        total = max(0,total-n%2);
        ans += (total == 0 ? '1' : '0');
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}