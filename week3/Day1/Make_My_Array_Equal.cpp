#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v)cin>>it;
    map<ll,ll>mp;
    int cnt=0;
    for(auto it:v){
        if(it!=0 && mp.find(it)==mp.end()){
            mp[it]++;
            cnt++;
        }
    }
    if(cnt<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
} 

