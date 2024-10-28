#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int ans = 0;
    if(a>=b){
        ans += a;
        a--;
    }else{
        ans += b;
        b--;
    }
    ans += max(a,b);
    cout<<ans<<endl;
    return 0;
}