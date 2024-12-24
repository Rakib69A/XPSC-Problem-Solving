#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int len = log2(n);
    cout<<31<<endl;
    vector<int> v;
    for(int i=0;i<=30;i++){
        if(n & (1<<i)){
            v.push_back(1);
        }
        else{
            v.push_back(0);
        }
    }
    for(int val:v)
        cout<<val<<" ";
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