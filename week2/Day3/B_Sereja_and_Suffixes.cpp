#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> v(n+5);
    vector<int> dist(n+5);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    set<int> s;
    for(int i=n;i>=1;i--){
        s.insert(v[i]);
        dist[i] = s.size();
    }
    for(int i=1;i<=m;i++){
        int q;cin>>q;
        cout<<dist[q]<<endl;
    }
    cout<<endl;
    return 0;
}