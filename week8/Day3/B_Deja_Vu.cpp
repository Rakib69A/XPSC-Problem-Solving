#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int query;
    vector<int> b;
    for(int i=0;i<q;i++){
        cin>>query;
        if(b.empty() || b.back()>query)
            b.push_back(query);
    }
    for(int i=0;i<n;i++){
        for(auto it:b){
            if(a[i]%(1<<it)==0){
                it=it-1;
                a[i]+=(1<<it);
            }
        }
    }
    for(auto it:a)
        cout<<it<<" ";
    cout<<endl;
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