#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x : a) cin>>x;
    vector<ll> bit_counts(30, 0);
    for(auto x : a){
        for(int i=0;i<30;i++){
            if(x & (1<<i)) 
                bit_counts[i]++;
        }
    }
    // vector<ll> non_zero_counts;
    // for(int i=0;i<30;i++){
    //     if(bit_counts[i]>0){
    //         non_zero_counts.push_back(bit_counts[i]);
    //     }
    // }
    // if(non_zero_counts.empty()){
    //     for(int k=0;k<=n;k++){
    //         cout<<k<<(k==n ? '\n' : ' ');
    //     }
    //     return;
    // }
    int g = 0;
    for(int i=0;i<30;i++){
        g = gcd(g, bit_counts[i]);
    }
    for(int i=1;i<=n;i++){
        if(g%i == 0)
            cout<<i<<" ";
    }
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