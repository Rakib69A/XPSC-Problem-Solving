#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int ans = (ceil((a*1.0)/c))*c;
    // cout<<ceil((a*1.0)/c)<<endl;
    if(ans <= b) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}