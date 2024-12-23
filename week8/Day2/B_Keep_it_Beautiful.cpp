#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v) cin>>i;
    string ans = "1";
    vector<int> a;
    a.push_back(v[0]);
    bool broken = false;
    for(int i=1;i<n;i++){
        if(v[i] >= a.back() and !broken){
            a.push_back(v[i]);
            ans += '1';
        }
        else if(!broken and v[i] <= a.front()){
            a.push_back(v[i]);
            ans += '1';
            broken = true;
        }
        else if(v[i] >= a.back() and v[i] <= a.front()){
            a.push_back(v[i]);
            ans += '1';
        }
        else{
            ans += '0';
        }  
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