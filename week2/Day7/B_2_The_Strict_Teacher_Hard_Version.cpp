#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<int> t(m);
    for(int i=0;i<m;i++)   
        cin>>t[i];
    sort(t.begin(),t.end());
    while(q--)
    {
        int d;
        cin>>d;
        if(d < t[0]){
            cout<<t[0] - 1<<endl;
            continue;
        }
        if(d > t[m-1] ){
            cout<<n-t[m-1]<<endl;
            continue;
        }
        auto it = lower_bound(t.begin(),t.end(),d);
        auto j = it;
        j--;
        int left = *j;
        int right = *it;
        int mid = (right+left)/2;
        cout<<min(abs(mid-left),abs(mid-right))<<endl;
    }
    
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