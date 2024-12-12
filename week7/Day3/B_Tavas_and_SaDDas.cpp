#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int digit = s.size();
    long long ans = (1<<digit)-2;
    for(int i = digit - 1, cnt = 0;i>=0;i--,cnt++){
        if(s[i]=='7')
            ans += (1 << cnt);
    }
    cout<<ans+1<<endl;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}